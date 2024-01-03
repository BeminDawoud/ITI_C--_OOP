#include "person.h"
#include "employee.h"
#include "student.h"


int main()
{
    // creating a student
    student std1(18, "sara", "email@gmail.com", 3);

    std1.display();
    std1.modifyemail();
    std1.display();

    // creating an employee.
    employee emp1(10, "john", "email@gmail.com", 15000);

    emp1.display();
    emp1.changePassword();
    emp1.modifyemail();
    emp1.display();

    return 0;
}
