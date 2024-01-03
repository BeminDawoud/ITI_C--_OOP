#include "student.h"

int student::counter = 0;

int main()
{
    student st1;
    student st2("Ahmed");
    student st3("Ali");


    cout << "total students: " << student::getCount() <<endl;

    return 0;
}
