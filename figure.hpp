#ifndef FIGURE_HPP
#define FIGURE_HPP

#include <iostream>
#include <vector>
#include "point.hpp"

class Figure {
protected:
    std::vector <Point> vertices;
public:
    Figure() {}
    virtual double getSquare() = 0;
    Point getCenter();
    void printVertices();
};

#endif
