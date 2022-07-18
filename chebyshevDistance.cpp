#include "distance.h"
#include <cmath>
#include <string>

using namespace std;

class ChebyshevDistance
{
public:
    double getDistance(const FlowerPoint p1, const FlowerPoint p2) const;
};

double ChebyshevDistance::getDistance(const FlowerPoint p1, const FlowerPoint p2) const {
   return max(abs(p1.getPetalLength() - p2.getPetalLength()),
          max(abs(p1.getSepalLength() - p2.getSepalLength()),
          max(abs(p1.getSepalWidth() - p2.getSepalWidth()),
              abs(p1.getWidth() - p2.getWidth()))));
}