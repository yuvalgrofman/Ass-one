#include "dataSpace.h"
#include <vector>
#include "flower/flowerSorter.h"

using namespace std;

DataSpace::DataSpace(const Flower** data, const int numFlowers): numFlowers(numFlowers) {
    this->data = data;
}

DataSpace::~DataSpace() {
    for (int i = 0; i < numFlowers; i++) {
        delete data[i];
    }
    delete[] data;
}

void DataSpace::sortByDist(const FlowerPoint& flower, Distance& distance) const {
    FlowerSorter sorter(flower, distance);
    sorter.sortFlowerList(data, numFlowers);
}

FlowerType DataSpace::predict(int k, const FlowerPoint& flower, Distance& distance) const {
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