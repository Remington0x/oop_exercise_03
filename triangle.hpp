#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "figure.hpp"

class Triangle : public Figure {
public:
    Triangle(Point A, Point B, Point C);
    double getSquare() override;
};

#endif
