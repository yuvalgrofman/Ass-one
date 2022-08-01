#include "classifier.h"
#include "distances/euclideanDistance.h"
#include "distances/manhattanDistance.h"
#include "distances/chebyshevDistance.h"

/**
 * The main function for running the program.
 * @param argc - the number of arguments the program got from the console.
 * @param argv - the arguments the program got from the console.
 * @return 0 (the default return value for a c++ main function).
 */
int main(int argc, char* argv[]) {
    vector<Distance*> distances = {(new EuclideanDistance()), (new ManhattanDistance()), (new ChebyshevDistance())};

    Classifier* classifier = nullptr;
    if (argc == 1) {
        classifier = new Classifier(3, &distances,
                                    "../classified.csv","../Unclassified.csv");
    }
    else if (argc == 2) {
        classifier = new Classifier(stoi(argv[1]), &distances,
                                    "../classified.csv","../Unclassified.csv");
    } else if (argc == 3) {
        string classifiedData, unclassifiedData;
        classifiedData.append(argv[2]);
        classifiedData.append("/classified.csv");
        unclassifiedData.append(argv[2]);
        unclassifiedData.append("/Unclassified.csv");
        classifier = new Classifier(stoi(argv[1]), &distances,
                                    classifiedData,unclassifiedData);
    } else {
        classifier = new Classifier(stoi(argv[1]), &distances,
                                    argv[2], argv[3]);
    }

    classifier->classify();
    delete classifier;
}