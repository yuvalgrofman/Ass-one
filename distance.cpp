#include "distance.h"
#include <cmath>

using namespace std;

class Distance
{
public:
    Distance();
    ~Distance();
    double Distance::getDistance(const FlowerPoint& p1, const FlowerPoint& p2) const {
    }
};

Distance::Distance(){}
Distance::~Distance(){}

double Distance::getDistance(const FlowerPoint& p1, const FlowerPoint& p2) const {
    return sqrt(std::pow(p1.getPetalLength() - p2.getPetalLength(), 2) +
                std::pow(p1.getSepalLength() - p2.getSepalLength(), 2) +
                std::pow(p1.getSepalLength() - p2.getSepalLength(), 2) + 
                std::pow(p1.getSepalLength() - p2.getSepalLength(), 2));
                
}