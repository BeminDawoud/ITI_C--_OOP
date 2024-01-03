#include "employee.h"



employee::employee() : person()
{
    salary = 0;
}


employee::employee(int id, string Name, string Mail, int sal) : person(id, Name, Mail)
{
    salary = sal;
}


void employee::setSalary(int sal)
{
    salary = sal;
}


int employee::getSalary()
{
    return (salary);
}


void employee::modifyemail()
{
    cout << "Enter the new e-mail that you want for " << name << ":" << endl;
    cin >> email;
}


void employee::display()
{
    cout << "\nEmployee's Information " << endl;
    cout << "------------------------------------------" << endl;
    cout << "employee's ID is " << ID << endl;
    cout << "employee's name is " << name << endl;
    cout << "employee's salary is " << salary << endl;
    cout << "employee's Email is " << email << endl;
    cout << "------------------------------------------\n" << endl;
}


employee::~employee()
{
    //dtor
}
