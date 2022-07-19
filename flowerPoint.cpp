#include "flowerPoint.h"

FlowerPoint::FlowerPoint(double width, double sepalLength, double sepalWidth, double petalLength) :
width(width), sepalLength(sepalLength), sepalWidth(sepalWidth), petalLength(petalLength) {}

FlowerPoint::FlowerPoint() {
    width = 0;
    sepalLength = 0;
    sepalWidth = 0;
    petalLength = 0;
}

double FlowerPoint::getPetalLength() const {
    return petalLength;
}

double FlowerPoint::getSepalLength() const {
    return sepalLength;
}

double FlowerPoint::getSepalWidth() const {
    return sepalWidth;
}

double FlowerPoint::getWidth() const {
    return width;
}

void FlowerPoint::setPetalLength(double petalLength) {
    this->petalLength = petalLength;
}

void FlowerPoint::setWidth(double width) {
    this->width = width;
}

void FlowerPoint::setSepalWidth(double sepalWidth) {
    this->sepalWidth = sepalWidth;
}

void FlowerPoint::setSepalLength(double sepalLength) {
    this->sepalLength = sepalLength;
}