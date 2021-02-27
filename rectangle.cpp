#include "rectangle.hpp"

Rectangle::Rectangle(Point A, Point B, Point C, Point D) {
    vertices.reserve(4);
    vertices[0] = A;
    vertices[1] = B;
    vertices[2] = C;
    vertices[3] = D;
}

double Rectangle::getSquare() {
    double square;
    square = std::abs((vertices[0].x - vertices[1].x) * (vertices[1].y - vertices[2].y));
    return square;
}
