#include "GeoShape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

int main() {

    Rectangle rect(5.0, 10.0);
    cout << "Area of Rectangle: " << rect.CalcArea() << endl;

    Square square(7.0);
    cout << "Area of Square: " << square.CalcArea() << endl;

    Circle circle(4.5);
    cout << "Area of Circle: " << circle.CalcArea() << endl;


    GeoShape *shape1, *shape2, *shape3;
    shape1 = &rect;
    shape2= &square;
    shape3= &circle;


    double sumAreas = rect.sumOfAllShapesArea(shape1, shape2, shape3);
    cout << "Sum of areas of Square, Circle, and another Square: " << sumAreas << endl;

    return 0;
}
