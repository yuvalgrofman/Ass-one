#include "distance.h"

//TODO: move to code to h file
class EuclideanDistance : public Distance
{
public:
    double getDistance(const FlowerPoint p1, const FlowerPoint p2) const;
};

double EuclideanDistance::getDistance(const FlowerPoint p1, const FlowerPoint p2) const {
    return getDistance(p1, p2);
}