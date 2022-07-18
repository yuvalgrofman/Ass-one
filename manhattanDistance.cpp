#include "distance.h"
#include <cmath>

class ManhattanDistance
{
public:
    double getDistance(const FlowerPoint p1, const FlowerPoint p2) const;
};

double ManhattanDistance::getDistance(const FlowerPoint p1, const FlowerPoint p2) const {
    return abs(p1.getPetalLength() - p2.getPetalLength()) +
           abs(p1.getSepalLength() - p2.getPetalLength()) +
           abs(p1.getSepalWidth() - p2.getSepalWidth()) +
           abs(p1.getWidth() - p1.getWidth());
}