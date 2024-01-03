#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"


class employee : public person
{
public:
    int salary;

    employee();
    employee(int id, string Name, string Mail, int sal);

    // setter and getter.
    void setSalary(int sal);
    int getSalary();

    // his own functions
    void modifyemail();
    void display();


    ~employee();


    private:
};

#endif // EMPLOYEE_H
