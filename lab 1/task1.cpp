#include <iostream>
using namespace std;

struct employee
{
	int id;
	char name[50];
	double salary;
	void fill()
	{
		cout << "what is your id: ";
		cin >> id;
		cout << "what is your name: ";
		cin >> name;
		cout << "what is your salary: ";
		cin >> salary;
	}
};

void printEmp(employee *emp, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "you id: " << emp[i].id << endl;
		cout << "you name: " << emp[i].name << endl;
		cout << "you salary: " << emp[i].salary << endl;
	}
}

int main(void)
{
	employee *emp;

	emp = new employee[3];
	emp[0].fill();
	printEmp(emp, 1);

	delete[] emp;

	return (0);
}
