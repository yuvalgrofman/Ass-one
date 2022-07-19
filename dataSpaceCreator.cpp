#include "dataSpaceCreator.h"

DataSpaceCreator::DataSpaceCreator(const Flower *flower, DataSpaceCreator *next) {
    this->flower = flower;
    this->next = next;
}

int DataSpaceCreator::length() const {
    if (flower == nullptr) {
        return 0;
    }
    if (next == nullptr) {
        return 1;
    }
    return 1 + next->length();
}

DataSpace DataSpaceCreator::makeDataSpace() const {
    const int count = length();
    Flower data[count];
    DataSpaceCreator *ptr = next;
    data[0] = *flower;
    for (int i = 1; i < count; i++) {
        ptr = ptr->next;
        data[i] = *(ptr->flower);
    }
    return DataSpace(data, count);
}

void DataSpaceCreator::add(const Flower *flower) {
    if (this->flower == nullptr) {
        this->flower = new Flower(*flower);
    } else {
        DataSpaceCreator *node = new DataSpaceCreator(flower, next);
        next = node;
    }
}

DataSpaceCreator::DataSpaceCreator(FlowerReader& reader) {
    flower = nullptr;
    next = nullptr;
    Flower *flowerFromRead = reader.readFlower();
    while (flowerFromRead != nullptr) {
        add(flowerFromRead);
        flowerFromRead = reader.readFlower();
    }
}