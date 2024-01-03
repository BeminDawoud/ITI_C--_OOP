#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle {
private:
    Point center;
    int radius;

public:

    Circle();
    Circle(Point center, int radius);


    void setCenter(Point newCenter);
    void setRadius(int newRadius);


    void Draw();

    ~Circle();
};

#endif // CIRCLE_H
