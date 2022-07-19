#include "dataSpace.h"
#include <vector>
#include "nearestNeighborsSearch.h"

using namespace std;

DataSpace::DataSpace(const Flower data[], const int numFlowers): numFlowers(numFlowers) {
    this->data = data;
}

DataSpace::~DataSpace() {
    delete[] data;
}

string DataSpace::predict(int k, const FlowerPoint flower, Distance distance) const {
    NearestNeighborsSearch nns;
    vector<Flower> flowers = nns.getNearestNeighbors(k, flower, *this, distance);

    int setosa = 0, virginica = 0, versicolor = 0;
    for (int i = 0; i < flowers.size(); i++) {
        if (flowers.at(i).getType() == "setosa")
            setosa++;
        else if (flowers.at(i).getType() == "virginica")
            virginica++;
        else
            versicolor++;
    }

    if (setosa >= virginica && setosa >= versicolor) {
        return "setosa";
    } else if (virginica >= setosa && virginica >= versicolor) {
        return "virginica";
    }
    return "versicolor";
}