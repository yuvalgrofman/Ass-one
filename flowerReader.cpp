#include "flowerReader.h"
#include <fstream>
#include <string>
#include <sstream>
#include <memory>

using namespace std;

FlowerReader::FlowerReader(const string &filename) : file(filename) {
    fin.open(file, ios::in);
}

Flower* FlowerReader::readFlower() {

    string line, word;
    getline(fin, line);

    stringstream streamLine(line);

    getline(streamLine, word, ',');
    int width = stoi(word);

    getline(streamLine, word, ',');
    int sepalLength = stoi(word);

    getline(streamLine, word, ',');
    int sepalWidth = stoi(word);

    getline(streamLine, word, ',');
    int petalLength = stoi(word);

    getline(streamLine, word, ',');
    string typeName = word;

    FlowerType type;

    if (word.compare("SETOSA") == 0) {
        type = SETOSA;
    } else if (word.compare("VIRGINICA") == 0) {
        type = VIRGINICA;
    } else {
        type = VERSICOLOR;
    }


    FlowerPoint fp = *(new FlowerPoint(width, sepalLength, sepalWidth, petalLength));
    Flower* flower = new Flower(fp, type);

    return flower;
}