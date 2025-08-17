#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:

    Circle() = default;
    ~Circle() = default;
    double radius;
    double getPerimeter(double radius) {
        return 2 * radius * M_PI;
    }
    double getArea(double radius) {
        return radius * radius * M_PI;
    }
private:
    static const double M_PI; // Define the constant for P
};

#endif
