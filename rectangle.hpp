#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "figure.hpp"

class Rectangle : public Figure {
public:
    Rectangle(Point A, Point B, Point C, Point D);
    double getSquare() override;
};

#endif
