#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

class Derived : public Base
{
private:
    int z;

public:
    Derived();
    Derived(int x_val, int y_val, int z_val);

    // Setter
    void setZ(int z_val);

    // Getter
    int getZ();

    // Override function sum
    int sum() override;

    ~Derived();
};

#endif // DERIVED_H
