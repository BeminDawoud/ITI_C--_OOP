#ifndef GEOSHAPE_H
#define GEOSHAPE_H

#include <iostream>
#include <cmath>


using namespace std;

class GeoShape {
protected:
    double dim1;
    double dim2;

public:
    GeoShape();
    GeoShape(double d1, double d2);

    // Setters
    void setDim1(double d1);
    void setDim2(double d2);

    // Getters
    double getDim1();
    double getDim2();

    // Function CalcArea
    double CalcArea();

    ~GeoShape();
};

#endif // GEOSHAPE_H

