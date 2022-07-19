#ifndef ASS_ONE_MANHATTAN_DISTANCE
#define ASS_ONE_MANHATTAN_DISTANCE

#include "distance.h"

class ManhattanDistance : public Distance
{
public:
    double getDistance(const FlowerPoint p1, const FlowerPoint p2) const;
};
#endif //ASS_ONE_MANHATTAN_DISTANCE