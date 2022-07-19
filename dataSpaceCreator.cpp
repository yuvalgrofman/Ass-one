#include "dataSpaceCreator.h"
#include <vector>

DataSpace DataSpaceCreator::makeDataSpace() const{
    Flower data[length()];
    for (int i = 0; i < length(); i++) {
        data[i] = flowers.at(i);
    }
    return DataSpace(data, length());
}

int DataSpaceCreator::length() const{
    return flowers.size();
}

void DataSpaceCreator::add(const Flower* flower) {
    flowers.push_back(*flower);
}

DataSpaceCreator::DataSpaceCreator(FlowerReader& reader) {
    Flower* ptr =  reader.readFlower();
    while (ptr != nullptr) {
        add(ptr);
        ptr = reader.readFlower();
    }
}