#include "Circle.h"

Circle::Circle() : center(Point()), radius(0) {}

Circle::Circle(Point center, int radius) : center(center), radius(radius) {}


void Circle::setCenter(Point newCenter)
{
    center = newCenter;
}

void Circle::setRadius(int newRadius)
{
    radius = newRadius;
}

void Circle::Draw()
{
    circle(center.getX(), center.getY(), radius);
}

Circle::~Circle()
{
    //dtor
}
