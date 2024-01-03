#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <graphics.h>

using namespace std;


class Point
{
private:
    int x;
    int y;

public:

    Point();
    Point(int x, int y);


    void setX(int newX);
    void setY(int newY);


    int getX();
    int getY();


    ~Point();
};

#endif // POINT_H
