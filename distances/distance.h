#ifndef ASS_ONE_DISTANCE
#define ASS_ONE_DISTANCE

#include "flower/flowerPoint.h"
#include "string"

using namespace std;

class Distance {
    public:
        virtual double getDistance(const FlowerPoint& p1, const FlowerPoint& p2) const = 0;
        virtual string getName() const = 0;
};

#endif //ASS_ONE_DISTANCE