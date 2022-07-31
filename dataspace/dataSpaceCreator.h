#ifndef ASS_ONE_DATA_SPACE_CREATOR_H
#define ASS_ONE_DATA_SPACE_CREATOR_H

#include "flower/flower.h"
#include "dataSpace.h"
#include "flower/flowerReader.h"
#include <vector>

class DataSpaceCreator {
private:
    vector<Flower> flowers;
    void add(const Flower& flower);
    int length() const;

public:
    DataSpaceCreator(FlowerReader& reader);
    DataSpace& makeDataSpace() const;
};

#endif // ASS_ONE_DATA_SPACE_CREATOR_H