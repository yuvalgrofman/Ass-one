#ifndef ASS_ONE_EUCLIDEAN_DISTANCE
#define ASS_ONE_EUCLIDEAN_DISTANCE

#include "distance.h"

class EuclideanDistance : public Distance {
public:
    virtual double getDistance(const FlowerPoint& p1, const FlowerPoint& p2) const;
    virtual string getName() const;
};
#endif //ASS_ONE_EUCLIDEAN_DISTANCE