#include <iostream>
#include <vector>
#include <cmath>

#include "triangle.hpp"
#include "rectangle.hpp"
#include "quad.hpp"

int main() {
    double x, y, sideX, sideY;

    std::cout << "Enter triangle: \n";
    std::cout << "Enter x y of vertex and side length\n";
    std::cin >> x >> y >> sideX;
    Triangle* tri = new Triangle(Point(x, y), Point(x + 1 / 2 * sideX, y + sideX * std::pow(3, 0.5) / 2), Point(x + sideX, y));

    std::vector <Figure*> arr;
    arr.push_back(tri);

    std::cout << "Enter quadrate: \n";
    std::cout << "Enter x y of vertex and side length\n";
    std::cin >> x >> y >> sideX;
    Quad* quad = new Quad(Point(x, y), Point(x + sideX, y), Point(x + sideX, y + sideX), Point(x, y + sideX));
    arr.push_back(quad);

    std::cout << "Enter rectangle: \n";
    std::cout << "Enter x y of vertex, horizontal and vertical sides\n";
    std::cin >> x >> y >> sideX >> sideY;

    Rectangle* rect = new Rectangle(Point(x, y), Point(x + sideX, y), Point(x + sideX, y + sideX), Point(x, y + sideX));
    arr.push_back(rect);

    std::cout << std::endl;

    //3 basic functions
    Point p(0.0, 0.0);
    for (auto fig : arr) {
        fig->printVertices();
        p = fig->getCenter();
        std::cout << "Geometric center is (" << p.x << ", " << p.y << ")\n";
        std::cout << "Square is equal to " << fig->getSquare() << "\n\n";
    }

    //sum of squares
    double square = 0.0;
    for (auto fig : arr) {
        square += fig->getSquare();
    }
    std::cout << "Total square is equal to " << square << "\n\n";

    //deleting element by index
    int index;
    std::cout << "Enter index of element to delete\n";
    std::cin >> index;
    arr.erase(arr.begin() + index);

    std::cout << "After delete:\n";
    for (auto fig : arr) {
        fig->printVertices();
        p = fig->getCenter();
        std::cout << "\nGeometric center is (" << p.x << ", " << p.y << ")\n";
        std::cout << "Square is equal to " << fig->getSquare() << "\n\n";
    }

    square = 0.0;
    for (auto fig : arr) {
        square += fig->getSquare();
    }
    std::cout << "Total square is equal to " << square << "\n\n";

}
