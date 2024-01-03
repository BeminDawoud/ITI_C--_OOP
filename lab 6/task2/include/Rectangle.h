#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "GeoShape.h"

class Rectangle : public GeoShape
{
public:
    Rectangle();
    Rectangle(double length, double width);

    double CalcArea() override;

    ~Rectangle();
};

#endif // RECTANGLE_H
