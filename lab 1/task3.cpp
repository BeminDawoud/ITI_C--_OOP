#include <iostream>

using namespace std;

void printInfo(string name, int age = 25, string city = "Unknown")
{

	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "City: " << city << endl;
}

int main()
{
	printInfo("Bemin");
	printInfo("Ahmed", 20);
	printInfo("John", 27, "Alexandria");
	return 0;
}
