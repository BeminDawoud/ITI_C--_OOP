#include "Derived.h"

Derived::Derived() : Base()
{
    z = 0;
}

Derived::Derived(int x_val, int y_val, int z_val) : Base(x_val, y_val)
{
    z = z_val;
}


void Derived::setZ(int z_val)
{
    z = z_val;
}

int Derived::getZ()
{
    return z;
}

int Derived::sum()
{
    return (Base::sum()+ z);
}

Derived::~Derived()
{

}
