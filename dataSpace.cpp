#include "dataSpace.h"

DataSpace::DataSpace(const Flower *data, const int numFlowers): numFlowers(numFlowers) {
    this->data = data;
}

DataSpace::~DataSpace() {
    delete[] data;
}

bool DataSpace::predict(const FlowerPoint, Distance distance) const {
    //TODO
}