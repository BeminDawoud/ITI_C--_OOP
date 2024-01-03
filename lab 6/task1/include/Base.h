#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;


class Base {
private:
    int x;
    int y;

public:
    Base();
    Base(int x_val, int y_val);


    // Setters
    void setX(int x_val);
    void setY(int y_val);

    // Getters
    int getX();
    int getY();

    // Function sum
    virtual int sum();

    virtual ~Base();
};

#endif // BASE_H
