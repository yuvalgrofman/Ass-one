#ifndef ASS_ONE_FLOWER_READER_H
#define ASS_ONE_FLOWER_READER_H

#include "flower/flower.h"
#include <fstream>

class FlowerReader {
    private:
        string file;
        fstream fin;

    public:
        FlowerReader(const string &filename);
        Flower* readFlower();
        FlowerPoint* readFlowerPoint();
};

#endif //ASS_ONE_FLOWER_READER_H
