#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
using namespace std;

class student {
private:
    string name;
    static int counter;

public:
    student();
    student(string Name);
    static int getCount();
    ~student();
};




#endif // STUDENT_H
