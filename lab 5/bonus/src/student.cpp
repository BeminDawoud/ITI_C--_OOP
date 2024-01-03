#include "student.h"

student::student() : person()
{
   gpa = 0;
}


student::student(int id, string Name, string Mail, int Gpa) : person(id, Name, Mail)
{
    gpa = Gpa;
}


void student::setGpa(int Gpa)
{
    gpa = Gpa;
}


int student::getGpa()
{
    return (gpa);
}


void student::modifyemail()
{
    cout << "Enter the new e-mail that you want for " << name << ":" << endl;
    cin >> email;
}


void student::display()
{
    cout << "\nStudent's Information " << endl;
    cout << "------------------------------------------" << endl;
    cout << "student's ID is " << ID << endl;
    cout << "student's name is " << name << endl;
    cout << "student's gpa is " << gpa << endl;
    cout << "student's Email is " << email << endl;
    cout << "------------------------------------------\n" << endl;
}


student::~student()
{
    //dtor
}
