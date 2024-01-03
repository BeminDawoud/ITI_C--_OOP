#include "point.h"

int main(void)
{
	point num1(10, 30);
	point num2(10, 30);
	point num3;

	num3 = num1 + num2;

	cout << "Result: (" << num3.getX() << ", " << num3.getY() << ")" << endl;
	cout << "Total number of objects created: " << point::getCount() << endl;
	cout << (num1 == num2) << endl;
	cout << (num1 < num2) << endl;
	cout << (num3 <= num2) << endl;

	num3++;
    cout << "Result: (" << num3.getX() << ", " << num3.getY() << ")" << endl;


	return 0;
}
