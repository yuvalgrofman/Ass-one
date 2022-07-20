#include "flowerReader.h"
#include <fstream>
#include <string>
#include <sstream>
#include <memory>

using namespace std;

FlowerReader::FlowerReader(const string filename) : file(filename){
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
    string type = word;

    FlowerPoint fp = *(new FlowerPoint(width, sepalLength, sepalWidth, petalLength));
    auto flower = new unique_ptr<Flower>(new Flower(fp, type));

    return flower;
}