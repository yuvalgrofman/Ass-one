#include "dataSpaceCreator.h"
#include <iostream>
#include "euclideanDistance.h"

int main() {
    FlowerReader &classifiedReader = *(new FlowerReader("/home/jonathan/CLionProjects/Ass-one/classified.csv"));
    DataSpaceCreator creator = DataSpaceCreator(classifiedReader);
    DataSpace &dataSpace = creator.makeDataSpace();
    FlowerReader &unClassifiedReader = *(new FlowerReader("/home/jonathan/CLionProjects/Ass-one/Unclassified.csv"));
    std::cout << "Prediction: " << (int)dataSpace.predict(3, *(unClassifiedReader.readFlowerPoint()), EuclideanDistance()) << endl;
}