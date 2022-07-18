#ifndef ASS_ONE_FLOWER_H
#define ASS_ONE_FLOWER_H

#include <string>
#include "flowerPoint.h"
using namespace std;

class Flower {
    private:
        const FlowerPoint dataPoint;
        const string type;

    public:
        Flower(FlowerPoint dataPoint, string type);
        string getType() const;
        FlowerPoint getData() const;
};

#endif //ASS_ONE_FLOWER_H
