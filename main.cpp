#include <iostream>
#include "dataSpaceCreator.h"
#include "euclideanDistance.h"
int main() {
    FlowerReader &classifiedReader = *(new FlowerReader("classified.csv"));
    DataSpaceCreator creator = DataSpaceCreator(classifiedReader);
    DataSpace &dataSpace = creator.makeDataSpace();
    FlowerReader &unClassifiedReader = *(new FlowerReader("Unclassified.csv"));
    std::cout << "Prediction: " << dataSpace.predict(3, *(unClassifiedReader.readFlowerPoint()), EuclideanDistance()) << endl;
}