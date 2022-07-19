#ifndef ASS_ONE_FLOWER_POINT_H
#define ASS_ONE_FLOWER_POINT_H

class FlowerPoint {
    private:
        double width;
        double sepalLength;
        double sepalWidth;
        double petalLength;

    public:
        FlowerPoint(double width, double sepalLength, double sepalWidth, double petalLength);
        FlowerPoint();

        double getWidth() const;
        double getSepalLength() const;
        double getSepalWidth() const;
        double getPetalLength() const;

        void setWidth(double width);
        void setSepalLength(double sepalLength);
        void setSepalWidth(double sepalWidth);
        void setPetalLength(double petalLength);
};

#endif //ASS_ONE_FLOWER_POINT_H