#include "triangle.hpp"

Triangle::Triangle(Point A, Point B, Point C) {
    vertices.reserve(3);
    vertices[0] = A;
    vertices[1] = B;
    vertices[2] = C;
}

double Triangle::getSquare() {
    double square;
    square = std::abs((vertices[1].x - vertices[0].x) * (vertices[2].y - vertices[0].y) - (vertices[2].x - vertices[0].x) * (vertices[1].y - vertices[0].y)) / 2;
    return square;
}
