#include "point.h"

int point::counter = 0;

point::point()
{
	counter++;
	x = 0;
	y = 0;
}
point::point(int X, int Y)
{
	counter++;
	x = X;
	y = Y;
}
int point::getCount()
{
	return (counter);
}
int point::getX()
{
	return (x);
}
int point::getY()
{
	return (y);
}
point point::operator+(point Y)
{
	point res;

	res.x = x + Y.x;
	res.y = y + Y.y;
	return res;
}

void point::operator++()
{
	x++;
	y++;
}
int point::operator==(point Y)
{
	if (x == Y.x && y == Y.y)
		return 1;
	else
		return 0;
}
int point::operator<=(point Y)
{
	if (x <= Y.x && y <= Y.y)
		return 1;
	else
		return 0;
}
int point::operator<(point Y)
{
	if (x < Y.x && y < Y.y)
		return 1;
	else
		return 0;
}
point::~point(){};
