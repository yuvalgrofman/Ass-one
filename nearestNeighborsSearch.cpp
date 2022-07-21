#include "nearestNeighborsSearch.h"
const vector<Flower>& NearestNeighborsSearch::getNearestNeighbors(const int k,
                     const FlowerPoint &flower, const DataSpace &ds, Distance &distance) const {
    vector<Flower> result = *(new vector<Flower>());
    for (int i = 0; i < ds.getSize(); i++) {
        Flower &f = ds.getFlower(i);
        result.push_back(f);
    }

    result.sort([&flower, &distance](const Flower &a, const Flower &b) {
        return distance(flower, a) < distance(flower, b);
    });




}