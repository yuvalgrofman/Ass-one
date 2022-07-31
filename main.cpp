#include "classifier.h"
#include "distances/euclideanDistance.h"
#include "distances/manhattanDistance.h"
#include "distances/chebyshevDistance.h"

int main(int argc, char* argv[]) {
    vector<Distance*> distances = {(new EuclideanDistance()), (new ManhattanDistance()), (new ChebyshevDistance())};
    Classifier* classifier = nullptr;
    if (argv == nullptr) {
        classifier = new Classifier(3, &distances,
                                    "../classified.csv","../Unclassified.csv");
    }
    else if (argc == 1) {
        classifier = new Classifier(stoi(argv[0]), &distances,
                                    "../classified.csv","../Unclassified.csv");
    } else if (argc == 2) {
        string classifiedData, unclassifiedData;
        classifiedData.append(argv[1]);
        classifiedData.append("/classified.csv");
        unclassifiedData.append(argv[1]);
        unclassifiedData.append("/Unclassified.csv");
        classifier = new Classifier(stoi(argv[0]), &distances,
                                    classifiedData,unclassifiedData);
    } else {
        classifier = new Classifier(stoi(argv[0]), &distances,
                                    argv[1], argv[2]);
    }

    classifier->classify();
}