#ifndef ASS_ONE_CLASSIFIER_H
#define ASS_ONE_CLASSIFIER_H

#include <string>
#include "distance.h"
#include "vector"
#include "dataSpaceCreator.h"
#include <iostream>

using namespace std;

class Classifier {
    private:
        int k;
        vector<Distance>* distances;
        DataSpace* dataSpace;
        vector<FlowerPoint>* unclassifiedFLowers = new vector<FlowerPoint>();

        void predictFileByDist(string outputFile, Distance& distance);

    public:
        Classifier(int k, vector<Distance>* distances, string classifiedData, string unclassifiedData);
        void classify();
};


#endif //ASS_ONE_CLASSIFIER_H
