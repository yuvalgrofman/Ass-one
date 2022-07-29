#ifndef ASS_ONE_CHEBYSHEV_DISTANCE
#define ASS_ONE_CHEBYSHEV_DISTANCE

#include "distance.h"

class ChebyshevDistance : public Distance {
public:
    virtual double getDistance(const FlowerPoint p1, const FlowerPoint p2) const;
    virtual string getName() const;
};
#endif //ASS_ONE_CHEBYSHEV_DISTANCE