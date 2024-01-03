#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
	string name;
	int age;
	string email;

public:
	teacher();
	teacher(int a);
	teacher(int a, string n);
	void displayTeacher();
	void setName();
	void setName(string n);
	string getName();
	~teacher();
}

class student
{
private:
	string name;
	int age;
	string email;
	string username;
	string password;

public:
	student();
	student(int Age, string Name, string Mail);
	int getAge();
	string getName();
	string getEmail();
	string getUserName();
	string getPassword();
	void displayStudent();
	~student();
};

#endif
