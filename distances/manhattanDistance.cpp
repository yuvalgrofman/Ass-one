#include "manhattanDistance.h"
#include <cmath>


double ManhattanDistance::getDistance(const FlowerPoint& p1, const FlowerPoint& p2) const {
    return max(abs(p1.getPetalLength() - p2.getPetalLength()),
           max(abs(p1.getSepalLength() - p2.getSepalLength()),
           max(abs(p1.getSepalWidth() - p2.getSepalWidth()),
           abs(p1.getWidth() - p2.getWidth()))));
}

string ManhattanDistance::getName() const {
    return "manhattan";
}