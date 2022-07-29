#include "classifier.h"


Classifier::Classifier(int k, vector<Distance*>* distances, string classifiedData, string unclassifiedData) : k(k),
distances(distances) {

    FlowerReader &unClassifiedReader = *(new FlowerReader(unclassifiedData));
    FlowerPoint* ptr = unClassifiedReader.readFlowerPoint();

    while (ptr != nullptr) {
        unclassifiedFLowers->push_back(*(ptr));
        ptr = unClassifiedReader.readFlowerPoint();
    }

    FlowerReader &classifiedReader = *(new FlowerReader(classifiedData));
    DataSpaceCreator creator = DataSpaceCreator(classifiedReader);
    dataSpace = &creator.makeDataSpace();
}

void Classifier::classify() {
    for (Distance *distance : *distances) {
        predictFileByDist(distance->getName() + "_output.csv", *distance);
    }
}

void Classifier::predictFileByDist(string outputFile, Distance& distance) {
    ofstream outfile;
    outfile.open(outputFile, ios::out);

    for (FlowerPoint flower : *unclassifiedFLowers) {
        outfile << dataSpace->predict(k, flower, distance) << endl;
    }

    outfile.close();
}