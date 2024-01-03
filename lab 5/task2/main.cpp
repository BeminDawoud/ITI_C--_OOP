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

    return 0;
}
