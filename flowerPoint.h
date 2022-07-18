#ifndef ASS_ONE_FLOWER_POINT_H
#define ASS_ONE_FLOWER_POINT_H

class FlowerPoint {
    private:
        const double width;
        const double sepalLength;
        const double sepalWidth;
        const double petalLength;

    public:
        FlowerPoint(const double width, const double sepalLength, const double sepalWidth, const double petalLength);
        double getWidth();
        double getSepalLength();
        double getSepalWidth();
        double getPetalLength();
};

#endif //ASS_ONE_FLOWER_POINT_H