#ifndef PICTURE_H
#define PICTURE_H

#include "Circle.h"
#include "Rectangle.h"
#include "Line.h"

class Picture {
private:
    Circle *circle;
    Rect *rect;
    Line *line;

public:

    Picture();
    Picture( Circle *c, Rect *r, Line *l);
    Picture(Rect *rec, Line *l);
    Picture(Line *l);


    void Paint();


    ~Picture();
};

#endif // PICTURE_H
