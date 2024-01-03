#include "point.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Line.h"
#include "picture.h"

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(GREEN);


    Point p1(200, 200);
    Point p2(300, 350);


    Rect rec(p1, p2);
    rec.Draw();


    Point center(180, 200);
    Circle cir(center, 50);
    cir.Draw();


    Point start(100, 100);
    Point End(200, 300);


    Line myLine(start, End);
    myLine.Draw();


    // aggregation

    setcolor(WHITE);
    Circle *ptr1 = new Circle(center, 100);
    Line *ptr2 = new Line(p1, p2);
    Rect *ptr3 = new Rect(start, End);
    Picture Pic(ptr1, ptr3, ptr2);
    Pic.Paint();


    getch();
    closegraph();


    delete ptr1;
    delete ptr2;
    delete ptr3;


    return 0;
}
