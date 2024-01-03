#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

class Rect {
private:
    Point topLeft;
    Point bottomRight;

public:

    Rect();
    Rect(Point topLeft, Point bottomRight);


    void setTopLeft(Point newTopLeft);
    void setBottomRight(Point newBottomRight);


    void Draw();

    ~Rect();
};

#endif // RECTANGLE_H
