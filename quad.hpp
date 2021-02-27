#ifndef QUAD_HPP
#define QUAD_HPP

#include "figure.hpp"

class Quad : public Rectangle {
public:
    Quad(Point A, Point B, Point C, Point D) : Rectangle(A, B, C, D) {}
};

#endif
