//Ahmad JR
#include <iostream>

using namespace std;

short ReadNumber(string Message)
{
	short Number = 0;
	cout << Message;
	cin >> Number;

	return Number;
}

bool IsLeapYear(short Year)
{
	return((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInAYear(short Year)
{
	return IsLeapYear(Year) ? 366 : 365;
}

short NumberOfHoursInAYear(short Year)
{
	return NumberOfDaysInAYear(Year) * 24;
}

int NumberOfMinutesInAYear(short Year)
{
	return NumberOfHoursInAYear(Year) * 60;
}

int NumberOfSecondsInAYear(short Year)
{
	return NumberOfMinutesInAYear(Year) * 60;
}

void PrintResult()
{
	short Year = ReadNumber("Plese Enter A Year: ");

	cout << "\nNumber Of Days In [" << Year << "] Is: " << NumberOfDaysInAYear(Year);
	cout << "\n\nNumber Of Hours In [" << Year << "] Is: " << NumberOfHoursInAYear(Year);
	cout << "\n\nNumber Of Minutes In [" << Year << "] Is: " << NumberOfMinutesInAYear(Year);
	cout << "\n\nNumber Of Seconds In [" << Year << "] Is: " << NumberOfSecondsInAYear(Year);
}

int main()
{
	PrintResult();

	system("Pause>0");
}
