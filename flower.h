#ifndef ASS_ONE_FLOWER_H
#define ASS_ONE_FLOWER_H

#include <string>
#include "flowerPoint.h"
using namespace std;

class Flower {
    private:
        FlowerPoint dataPoint;
        string type;

    public:
        Flower();
        Flower(Flower const &flower);
        Flower(FlowerPoint dataPoint, string type);
        string getType() const;
        FlowerPoint getData() const;
        void setType(string type);
        void setData(FlowerPoint dataPoint);
};

#endif //ASS_ONE_FLOWER_H
