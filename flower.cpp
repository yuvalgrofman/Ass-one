#include "flower.h"

Flower::Flower(const FlowerPoint dataPoint, const string type): dataPoint(dataPoint), type(type) {}

Flower::Flower() {
    dataPoint = FlowerPoint();
    type = nullptr;
}

Flower::Flower(Flower const &flower) {
    dataPoint = FlowerPoint(flower.getData());
    type = flower.getType();
}

string Flower::getType() const {
    return type;
}

FlowerPoint Flower::getData() const {
    return dataPoint;
}