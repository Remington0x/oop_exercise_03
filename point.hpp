#ifndef POINT_HPP
#define POINT_HPP

class Point {
public:
    Point(double a, double b) : x(a), y(b) {};
    double x;
    double y;
    ~Point() {}
};

#endif
