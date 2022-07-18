#ifndef ASS_ONE_DATA_SPACE_CREATOR_H
#define ASS_ONE_DATA_SPACE_CREATOR_H

#include "flower.h"

class DataSpaceCreator {
private:
    const Flower dataPoint;
    const DataSpaceCreator *next;

    void add(const Flower dataPoint) const;

public:
    DataSpaceCreator();
    void init(); //change method later
    void makeDataSpace() const;
};


#endif // ASS_ONE_DATA_SPACE_CREATOR_H