#include "classifier.h"
#include "distances/euclideanDistance.h"
#include "distances/manhattanDistance.h"
#include "distances/chebyshevDistance.h"

int main(int argc, char* argv[]) {
    vector<Distance*> distances = {(new EuclideanDistance()), (new ManhattanDistance()), (new ChebyshevDistance())};
    Classifier* classifier = new Classifier(3, &distances, "C:\\Users\\yuval\\CLionProjects\\Ass-one\\classified.csv",
                "C:\\Users\\yuval\\CLionProjects\\Ass-one\\Unclassified.csv");

    classifier->classify();
//    FlowerReader &classifiedReader = *(new FlowerReader("/home/jonathan/CLionProjects/Ass-one/classified.csv"));
//    DataSpaceCreator creator = DataSpaceCreator(classifiedReader);
//    DataSpace &dataSpace = creator.makeDataSpace();
//    FlowerReader &unClassifiedReader = *(new FlowerReader("/home/jonathan/CLionProjects/Ass-one/Unclassified.csv"));
//    std::cout << "Prediction: " << dataSpace.predict(3, *(unClassifiedReader.readFlowerPoint()), EuclideanDistance()) << endl;
}