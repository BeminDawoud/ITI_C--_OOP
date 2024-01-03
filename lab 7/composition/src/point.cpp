
#include "point.h"

Point::Point() : x(0), y(0) {}

Point::Point(int x, int y) : x(x), y(y) {}

void Point::setX(int newX)
{
    x = newX;
}

void Point::setY(int newY)
{
    y = newY;
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}


Point::~Point()
{
    // Destructor implementation if needed
}
