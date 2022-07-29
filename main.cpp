#include "classifier.h"
#include "euclideanDistance.h"
#include "manhattanDistance.h"
#include "chebyshevDistance.h"

int main(int argc, char* argv[]) {
    vector<Distance*> distances = {(new EuclideanDistance())};
    Classifier* classifier = new Classifier(3, &distances, "/home/jonathan/CLionProjects/Ass-one/classified.csv",
                "/home/jonathan/CLionProjects/Ass-one/Unclassified.csv");

    classifier->classify();
//    FlowerReader &classifiedReader = *(new FlowerReader("/home/jonathan/CLionProjects/Ass-one/classified.csv"));
//    DataSpaceCreator creator = DataSpaceCreator(classifiedReader);
//    DataSpace &dataSpace = creator.makeDataSpace();
//    FlowerReader &unClassifiedReader = *(new FlowerReader("/home/jonathan/CLionProjects/Ass-one/Unclassified.csv"));
//    std::cout << "Prediction: " << dataSpace.predict(3, *(unClassifiedReader.readFlowerPoint()), EuclideanDistance()) << endl;
}