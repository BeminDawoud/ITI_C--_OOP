#ifndef CIRCLE_H
#define CIRCLE_H

#include "GeoShape.h"

class Circle : public GeoShape {
public:
    Circle();
    Circle(double radius);

    double CalcArea();

    ~Circle();
};

#endif // CIRCLE_H
