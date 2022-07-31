#ifndef ASS_ONE_FLOWER_TYPE_H
#define ASS_ONE_FLOWER_TYPE_H

/**
 * @brief The FlowerType class
 *
 * This class represents a FlowerType with a name.
 */
enum FlowerType {
    SETOSA = 0,
    VIRGINICA = 1,
    VERSICOLOR = 2
};
const int NUM_FLOWER_TYPES = 3;
/**
 * operator<< overload for FlowerType.
 * @param os Output stream
 * @param Token FlowerType to be printed
 * @return ostream with string representation of the FlowerType
 */
std::ostream& operator<<(std::ostream& os, const FlowerType Token);
#endif //ASS_ONE_FLOWER_TYPE_H
