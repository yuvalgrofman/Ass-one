#ifndef ASS_ONE_FLOWER_READER_H
#define ASS_ONE_FLOWER_READER_H

#include "flower.h"

class FlowerReader {
    public:
        FlowerReader(const File file); //something like this
        Flower* readFlower();
};

#endif //ASS_ONE_FLOWER_READER_H
