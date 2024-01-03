#include "Rectangle.h"

Rectangle::Rectangle() : GeoShape()
{

}

Rectangle::Rectangle(double length, double width) : GeoShape(length, width)
{

}

double Rectangle::CalcArea()
{
    return dim1 * dim2;
}

Rectangle::~Rectangle()
{

}
