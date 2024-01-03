#include "student.h"

student::student()
{
    name = "no name";
    counter++;
}

student::student(string Name){
        name = Name;
        counter++;
    }
int student::getCount() {
        return counter;
    }


student::~student()
{
    //dtor
}
