#ifndef LINE_H
#define LINE_H

#include "point.h"


class Line
{

private:
    Point Start;
    Point End;

public:

    Line();
    Line(Point S, Point E);


    void setStart(Point newStart);
    void setEnd(Point newEnd);


    void Draw();

    ~Line();

};

#endif // LINE_H
