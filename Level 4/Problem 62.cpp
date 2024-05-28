//Ahmad JR
#include <iostream>

using namespace std;

struct stDate
{
	short Day, Month, Year;
};

short ReadNumber(string Message)
{
	short Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

stDate ReadFullDate()
{
	stDate Date;

	Date.Day = ReadNumber("Plese Enter A Day: ");
	Date.Month = ReadNumber("Plese Enter A Month: ");
	Date.Year = ReadNumber("Plese Enter A Year:");

	return Date;
}

bool IsLeapYear(short Year)
{
	return((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInMonth(short Year, short Month)
{
	if (Month < 1 || Month >12)
		return 0;

	short ArrOfMonthDays[12] = { 31,28 + IsLeapYear(Year) ,31,30,31,30,31,31,30,31,30,31 };

	return ArrOfMonthDays[Month - 1];
}

bool ValidateDate(stDate Date)
{
	if (Date.Day > NumberOfDaysInMonth(Date.Year, Date.Month))
		return false;

	if (Date.Month > 12)
		return false;

	return true;
}

void PrintResult()
{
	stDate Date = ReadFullDate();


	if (ValidateDate(Date))
		cout << "Yes, Date Is Valid Date.";

	else
		cout << "No, Date Is Not Valid Date.";
}

int main()
{
	PrintResult();

	system("Pause>0");
}

