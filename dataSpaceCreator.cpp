#include "dataSpaceCreator.h"

DataSpaceCreator::DataSpaceCreator(const Flower dataPoint) : dataPoint(dataPoint) {
    next = nullptr;
}

const int DataSpaceCreator::length() const {
    if (next == nullptr) {
        return 1;
    }
    return 1 + next->length();
}


DataSpace DataSpaceCreator::makeDataSpace() const {
    const int count = length();
    Flower data[count];
    DataSpaceCreator *ptr = next;
    data[0] = dataPoint;
    for (int i = 1; i < count; i++) {
        ptr = ptr->next;
        data[i] = ptr->dataPoint;
    }
    return DataSpace(data, count);
}
