#include "flower.h"

Flower::Flower(const FlowerPoint dataPoint, const FlowerType type): dataPoint(dataPoint), type(type) {}

Flower::Flower(Flower const &flower): dataPoint(flower.dataPoint), type(flower.type) {}

FlowerType Flower::getType() const {
    return type;
}

FlowerPoint Flower::getData() const {
    return dataPoint;
}