#ifndef SQUARE_H
#define SQUARE_H

#include "GeoShape.h"

class Square : public GeoShape {
public:
    Square();
    Square(double side);

    double CalcArea();

    ~Square();
};

#endif // SQUARE_H

