#ifndef ASS_ONE_DATA_SPACE_H
#define ASS_ONE_DATA_SPACE_H

#include "flower.h"
#include "distance.h"

class DataSpace {
    private:
        const int numFlowers;

        const Flower **data;
        void sortByDist(const FlowerPoint flower, Distance& distance) const;

    public:
        DataSpace(const Flower* data[], const int numFlowers);
        FlowerType predict(int k, const FlowerPoint, Distance distance) const;
        ~DataSpace();
};

#endif //ASS_ONE_DATA_SPACE_H
