#include "picture.h"
#include <graphics.h>

Picture::Picture() {}

Picture::Picture(Circle *cir, Rect *rec, Line *l)
{
    circle = cir;
    rect = rec;
    line = l;
}

Picture::Picture(Rect *rec, Line *l)
{
    rect = rec;
    line = l;
}

Picture::Picture(Line *l)
{
    line = l;
}


void Picture::Paint()
{
    circle->Draw();
    rect->Draw();
    line->Draw();
}

Picture::~Picture()
{

}
