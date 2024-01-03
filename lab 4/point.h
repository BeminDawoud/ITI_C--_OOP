#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class point
{
private:
	int x;
	int y;
	static int counter;

public:
	point();
	point(int X, int Y);
	static int getCount();
	point operator+(point Y);
	void operator++();
	int operator==(point Y);
	int operator<=(point Y);
	int operator<(point Y);
	int getX();
	int getY();
	~point();
};

#endif // POINT_H
