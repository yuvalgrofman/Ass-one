#include <iostream>
#include "flowerType.h"
std::ostream& operator<<(std::ostream& os, const FlowerType Token) {
    switch(Token){
        case FlowerType::SETOSA:
            os << "SETOSA";
            break;
        case FlowerType::VIRGINICA:
            os << "VIRGINICA";
            break;
        case FlowerType::VERSICOLOR:
            os << "VERSICOLOR";
            break;
        default:
            os << "UNKNOWN";
            break;
    }
    return os;
}