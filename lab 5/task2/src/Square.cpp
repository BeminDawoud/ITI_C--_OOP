#include "Square.h"

Square::Square() : GeoShape()
{

}

Square::Square(double side) : GeoShape(side, side)
{

}

double Square::CalcArea()
{
    return dim1 * dim1;
}

Square::~Square()
{

}
