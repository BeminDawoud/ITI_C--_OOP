#include <iostream>
#include <string>
using namespace std;

class date
{
private:
	int day;
	int month;
	int year;

public:
	// constructor.
	date()
	{
		day = 0;
		month = 0;
		year = 0;
	}
	date(int Day, int Month, int Year)
	{
		day = Day;
		month = Month;
		Year = Year;
	}

	// function to set date.
	void setObject()
	{
		cout << "Enter day" << endl;
		cin >> day;
		cout << "Enter month" << endl;
		cin >> month;
		cout << "Enter Year" << endl;
		cin >> year;
	}

	// functions to get day, month and year.
	int getDay()
	{
		return day;
	}

	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}

	// function to subtract date.
	date subtractDate(date d)
	{
		date result;

		// Calculate difference in days
		int days1 = year * 365 + month * 30 + day;
		int days2 = d.getYear() * 365 + d.getMonth() * 30 + d.getDay();
		int diffDays = days1 - days2;

		// Convert difference back to year, month, and days
		result.year = diffDays / 365;
		result.month = (diffDays % 365) / 30;
		result.day = (diffDays % 365) % 30;

		return result;
	}

	// function to print date after subtraction.
	void printDateAfterSubtract(date d)
	{
		date result = subtractDate(d);

		cout << "Number of days = " << result.day << endl;
		cout << "Months = " << result.month << endl;
		cout << "Years = " << result.year << endl;
	}
};

int main(void)
{

	date date1, date2;

	cout << "Enter data for date 1..." << endl;
	date1.setObject();
	cout << "Enter data for date 2..." << endl;
	date2.setObject();

	cout << "Date 1 - Date 2: " << endl;
	date1.printDateAfterSubtract(date2);
	return (0);
}