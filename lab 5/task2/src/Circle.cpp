#include "Circle.h"
#include <cmath>

const double PI = 3.14159;

Circle::Circle() : GeoShape()
{

}

Circle::Circle(double radius) : GeoShape(radius, 0)
{

}

double Circle::CalcArea()
{
    return PI * dim1 * dim1;
}

Circle::~Circle()
{

}
