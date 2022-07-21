#include "dataSpace.h"
#include <vector>
#include "nearestNeighborsSearch.h"

using namespace std;

DataSpace::DataSpace(const Flower data[], const int numFlowers): numFlowers(numFlowers) {
    this->data = new const Flower*[numFlowers];
    for (int i = 0; i < numFlowers; i++) {
        this->data[i] = &data[i];
    }
}

DataSpace::~DataSpace() {
    delete[] data;
}

void DataSpace::sortByDist(const FlowerPoint flower, Distance& distance) const {
    for (int i = 0; i < numFlowers; i++) {
        for (int j = i + 1; j < numFlowers; j++) {
            if (distance.getDistance(flower, data[j]->getData()) > distance.getDistance(flower, data[j + 1]->getData())) {
                const Flower *temp = data[j + 1];
                data[j + 1] = data[j];
                data[j] = temp;
            }
        }
    }
}

FlowerType DataSpace::predict(int k, const FlowerPoint flower, Distance distance) const {
    NearestNeighborsSearch nns;
    sortByDist(flower, distance);

    int closestNeighboursCount[NUM_FLOWER_TYPES];
    for (int i = 0; i < NUM_FLOWER_TYPES; i++) {
        closestNeighboursCount[i] = 0;
    }

    for (int i = 0; i < k; i++) {
        closestNeighboursCount[data[i]->getType()]++;
    }

    int max = -1;
    FlowerType maxType;
    for (int i = 0; i < NUM_FLOWER_TYPES; i++) {
        if (closestNeighboursCount[i] > max) {
            max = closestNeighboursCount[i];
            maxType = static_cast<FlowerType>(i);
        }
    }
    return maxType;
}