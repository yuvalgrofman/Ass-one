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

void Flower::setType(const string type) {
    this->type = type;
}

void Flower::setData(const FlowerPoint dataPoint) {
    this->dataPoint = dataPoint;
}