#include "Rectangle.h"

Rect::Rect() : topLeft(Point()), bottomRight(Point()) {}


Rect::Rect(Point topLeft, Point bottomRight) : topLeft(topLeft), bottomRight(bottomRight) {}



void Rect::setTopLeft(Point newTopLeft)
{
    topLeft = newTopLeft;
}


void Rect::setBottomRight(Point newBottomRight)
{
    bottomRight = newBottomRight;
}


void Rect::Draw()
{

    rectangle(topLeft.getX(), topLeft.getY(), bottomRight.getX(), bottomRight.getY());

}

Rect::~Rect()
{
    //dtor
}
