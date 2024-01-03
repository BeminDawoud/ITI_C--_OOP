#include "Line.h"

Line::Line() : Start(Point()), End(Point()) {}

Line::Line(Point S, Point E) : Start(S), End(E) {}

void Line::setStart(Point newStart)
{
    Start = newStart;
}

void Line::setEnd(Point newEnd)
{
    End = newEnd;
}

void Line::Draw()
{
    line(Start.getX(), Start.getY(), End.getX(), End.getY());

}

Line::~Line()
{
    //dtor
}
