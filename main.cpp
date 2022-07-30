#include "classifier.h"
#include "distances/euclideanDistance.h"
#include "distances/manhattanDistance.h"
#include "distances/chebyshevDistance.h"

int main(int argc, char* argv[]) {
    vector<Distance*> distances = {(new EuclideanDistance()), (new ManhattanDistance()), (new ChebyshevDistance())};
    Classifier* classifier = new Classifier(3, &distances, "..\\classified.csv","..\\Unclassified.csv");

    classifier->classify();
}