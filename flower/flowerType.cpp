#include "flowerType.h"
std::ostream& operator<<(std::ostream& os, const FlowerType Token) {
    switch(Token){
        case FlowerType::SETOSA:
            os << "Iris-setosa";
            break;
        case FlowerType::VIRGINICA:
            os << "Iris-viriginica";
            break;
        case FlowerType::VERSICOLOR:
            os << "Iris-versicolor";
            break;
        default:
            os << "UNKNOWN";
            break;
    }
    return os;
}