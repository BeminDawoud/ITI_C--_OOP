#include "student.h"

// default constructor.
student::student()
{
	this->name = "Bemin";
	age = 25;
	email = "bemin_dawoud@yahoo.com";
	username = "bemin";
	password = "123456";
}

// parameterized constructor.
student::student(int Age, string Name, string Mail)
{
	this->name = Name;
	age = Age;
	email = Mail;
	username = "bemin";
	password = "123456";
}

// getters
string student::getName()
{
	return name;
}

string student::getUserName()
{
	return username;
}
string student::getPassword()
{
	return password;
}

int student::getAge()
{
	return age;
}

student::~student()
{
	cout << "destroying the object" << endl;
	cout << "--------------------------------------" << endl;
}

void student::displayStudent()
{
	cout << "Student Info" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Student Name: " << name << endl;
	cout << "Student age: " << age << endl;
	cout << "Student email: " << email << endl;
	cout << "--------------------------------------" << endl;
}