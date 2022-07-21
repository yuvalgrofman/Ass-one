#ifndef ASS_ONE_NNS
#define ASS_ONE_NNS

#include "flower.h"
#include "dataSpace.h"
#include <vector>
using namespace std;

class NearestNeighborsSearch {
public:
    const vector<Flower>& getNearestNeighbors(const int k, const FlowerPoint &flower,
     const DataSpace &ds, Distance &distance) const;
};

#endif //ASS_ONE_NNS 