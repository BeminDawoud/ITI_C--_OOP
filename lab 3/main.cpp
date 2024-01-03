#include "student.h"

int main(void)
{
	student s;
	s.displayStudent();
	s = student(20, "ahmed", "ahmed@gmail.com");
	s.displayStudent();
	return (0);
}