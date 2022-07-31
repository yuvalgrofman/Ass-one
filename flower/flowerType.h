#ifndef ASS_ONE_FLOWER_TYPE_H
#define ASS_ONE_FLOWER_TYPE_H

#include <ostream>


enum FlowerType {
    SETOSA = 0,
    VIRGINICA = 1,
    VERSICOLOR = 2
};
const int NUM_FLOWER_TYPES = 3;
std::ostream& operator<<(std::ostream& os, const FlowerType Token);
#endif //ASS_ONE_FLOWER_TYPE_H
