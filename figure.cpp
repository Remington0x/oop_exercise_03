#include "figure.hpp"

Point Figure::getCenter() {
    double x = vertices[0].x;
    double y = vertices[0].y;

    for (long unsigned int i = 1; i < vertices.capacity(); ++i) {
        x += vertices[i].x;
        y += vertices[i].y;
    }

    x = x / vertices.capacity();
    y = y / vertices.capacity();

    return Point(x, y);
}

void Figure::printVertices() {
    for (long unsigned int i = 0; i < vertices.capacity(); ++i) {
        std::cout << '(' << vertices[i].x << ", " << vertices[i].y << ")\n";
    }
}
