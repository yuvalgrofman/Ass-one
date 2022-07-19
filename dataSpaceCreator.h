#ifndef ASS_ONE_DATA_SPACE_CREATOR_H
#define ASS_ONE_DATA_SPACE_CREATOR_H

#include "flower.h"
#include "dataSpace.h"
#include "flowerReader.h"

class DataSpaceCreator {
private:
    vector<Flower> flowers;
    void add(const Flower* flower);
    int length() const;

public:
    DataSpaceCreator(FlowerReader& reader);
    DataSpace makeDataSpace() const;
    ~DataSpaceCreator();
};

#endif // ASS_ONE_DATA_SPACE_CREATOR_H