#include "GeoShape.h"

GeoShape::GeoShape()
{
    dim1 = 0;
    dim2 = 0;
}

GeoShape::GeoShape(double d1, double d2)
{
    dim1 = d1;
    dim2 = d2;
}

void GeoShape::setDim1(double d1)
{
    dim1 = d1;
}

void GeoShape::setDim2(double d2)
{
    dim2 = d2;
}

double GeoShape::getDim1()
{
    return dim1;
}

double GeoShape::getDim2()
{
    return dim2;
}

double GeoShape::CalcArea()
{
    return 0;
}

GeoShape::~GeoShape()
{

}

