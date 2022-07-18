#include "flower.h"

Flower::Flower(const FlowerPoint dataPoint, const string type): dataPoint(dataPoint), type(type) {}

string Flower::getType() const {
    return type;
}

FlowerPoint Flower::getData() const {
    return dataPoint;
}