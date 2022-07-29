#ifndef ASS_ONE_DISTANCE
#define ASS_ONE_DISTANCE

#include "flowerPoint.h"
#include "string"

using namespace std;

class Distance {
    public:
        virtual double getDistance(const FlowerPoint p1, const FlowerPoint p2) const;
        virtual string getName() const;
};

#endif //ASS_ONE_DISTANCE