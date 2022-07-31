#include "classifier.h"
#include "distances/euclideanDistance.h"
#include "distances/manhattanDistance.h"
#include "distances/chebyshevDistance.h"

int main(int argc, char* argv[]) {
    vector<Distance*> distances = {(new EuclideanDistance()), (new ManhattanDistance()), (new ChebyshevDistance())};
    Classifier* classifier = nullptr;
    if (argc == 1) {
        std::cout<<"No arguments provided"<<std::endl;
        classifier = new Classifier(3, &distances,
                                    "../classified.csv","../Unclassified.csv");
    }
    else if (argc == 2) {
        std::cout<<"1: "<<std::endl;
        classifier = new Classifier(stoi(argv[1]), &distances,
                                    "../classified.csv","../Unclassified.csv");
    } else if (argc == 3) {
        std::cout<<"2"<<::endl;
        string classifiedData, unclassifiedData;
        classifiedData.append(argv[2]);
        classifiedData.append("/classified.csv");
        unclassifiedData.append(argv[2]);
        unclassifiedData.append("/Unclassified.csv");
        classifier = new Classifier(stoi(argv[1]), &distances,
                                    classifiedData,unclassifiedData);
    } else {
        std::cout<<"3"<<std::endl;
        classifier = new Classifier(stoi(argv[1]), &distances,
                                    argv[2], argv[3]);
    }

    classifier->classify();
}