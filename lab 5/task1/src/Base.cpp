#include "Base.h"

Base::Base()
{
    x = 0;
    y = 0;
}

Base::Base(int x_val, int y_val)
{
    x = x_val;
    y = y_val;
}

void Base::setX(int x_val)
{
    x = x_val;
}

void Base::setY(int y_val)
{
    y = y_val;
}

int Base::getX()
{
    return x;
}

int Base::getY()
{
    return y;
}

int Base::sum()
{
    return x + y;
}

Base::~Base()
{
}
