#ifndef ASS_ONE_SORT_FLOWER_LIST_H
#define ASS_ONE_SORT_FLOWER_LIST_H

#include "flower.h"
#include "distances/distance.h"

class FlowerSorter {
private:
    const FlowerPoint& flowerPoint;
    const Distance& distance;
    bool compare(const Flower* flower1, const Flower* flower2) const;
public:
    FlowerSorter(const FlowerPoint& flowerPoint, const Distance& distance);
    void sortFlowerList(const Flower** array, const int size) const;
};


#endif //ASS_ONE_SORT_FLOWER_LIST_H
