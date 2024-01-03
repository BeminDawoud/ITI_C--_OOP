#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class student : public person
{
public:
    int gpa;
    student();
    student(int id, string Name, string Mail, int Gpa);

    // setter and getter.
    void setGpa(int sal);
    int getGpa();


    // his own functions
    void modifyemail();
    void display();


    ~student();
};


#endif // STUDENT_H
