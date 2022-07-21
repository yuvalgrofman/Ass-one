#ifndef ASS_ONE_FLOWER_H
#define ASS_ONE_FLOWER_H

#include <string>
#include "flowerPoint.h"
#include "flowerType.h"

using namespace std;

class Flower {
    private:
        const FlowerPoint dataPoint;
        const FlowerType type;

    public:
        Flower(Flower const &flower);
        Flower(FlowerPoint dataPoint, FlowerType type);
        FlowerType getType() const;
        FlowerPoint getData() const;
};

#endif //ASS_ONE_FLOWER_H
