#include <iostream>
#include <string>
using namespace std;

class complex
{
private:
	int real;
	int imaginary;

public:
	// default and parametrized constructors
	complex()
	{
		cout << "creating a complex number..." << endl;
	}

	complex(int aReal, int aImaginary)
	{
		real = aReal;
		imaginary = aImaginary;
	}

	// function to set real and immaginary.
	void setNumbers()
	{
		cout << "Enter the real number" << endl;
		cin >> real;
		cout << "Enter an imaginary number without the i" << endl;
		cin >> imaginary;
	}

	// functions to get real and imaginary.
	int getReal()
	{
		return real;
	}

	int getImaginary()
	{
		return imaginary;
	}

	// functions to add and substract and print complex number.
	void addComplex(int aReal, int aImaginary)
	{
		this->real += aReal;
		this->imaginary += aImaginary;
	}

	void subComplex(int aReal, int aImaginary)
	{
		real -= aReal;
		imaginary -= aImaginary;
	}
	void printComplex();
};

void complex::printComplex()
{
	cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
}

int main(void)
{
	complex comp1;

	comp1.setNumbers();
	comp1.printComplex();
	comp1.addComplex(3, 5);
	comp1.printComplex();
	comp1.subComplex(3, 5);
	comp1.printComplex();

	return (0);
}