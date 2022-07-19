#ifndef ASS_ONE_DATA_SPACE_CREATOR_H
#define ASS_ONE_DATA_SPACE_CREATOR_H

#include "flower.h"
#include "dataSpace.h"

class DataSpaceCreator {
private:
    const Flower dataPoint;
    DataSpaceCreator *next;

    void add(const Flower dataPoint) const;
    const int length() const;

public:
    DataSpaceCreator(const Flower dataPoint);
    void init(); //change method later
    DataSpace makeDataSpace() const;
};


#endif // ASS_ONE_DATA_SPACE_CREATOR_H