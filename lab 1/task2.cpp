#include <iostream>

using namespace std;

class Employee
{

	int id;
	char name[50];
	double salary;

public:
	void fill()
	{
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter salary: ";
		cin >> salary;
	}

	void printData()
	{
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
};

int main()
{
	Employee emp;
	emp.fill();
	emp.printData();

	return 0;
}
