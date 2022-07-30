#ifndef ASS_ONE_FLOWER_POINT_H
#define ASS_ONE_FLOWER_POINT_H

class FlowerPoint {
    private:
        const double width;
        const double sepalLength;
        const double sepalWidth;
        const double petalLength;

    public:
        FlowerPoint(double width, double sepalLength, double sepalWidth, double petalLength);

        double getWidth() const;
        double getSepalLength() const;
        double getSepalWidth() const;
        double getPetalLength() const;
};

#endif //ASS_ONE_FLOWER_POINT_H