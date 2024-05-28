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

short NumberOfDaysInMonth(short Year, short Month)
{
	if (Month < 1 || Month >12)
		return 0;

	if (Month == 2)
		return IsLeapYear(Year) ? 29 : 28;

	short Arr31Days[7] = { 1,3,5,7,8,10,12 };

	for (short i = 1; i <= 7; i++)
	{
		if (Arr31Days[i - 1] == Month)
			return 31;
	}
	return 30;
}

short NumberOfHoursInMonth(short Year, short Month)
{
	return NumberOfDaysInMonth(Year, Month) * 24;
}

int NumberOfMinutesInMonth(short Year, short Month)
{
	return	NumberOfHoursInMonth(Year, Month) * 60;
}

int NumberOfSecondssInMonth(short Year, short Month)
{
	return NumberOfMinutesInMonth(Year, Month) * 60;
}

void PrintResult()
{
	short Year = ReadNumber("Plese Enter A Year: ");
	short Month = ReadNumber("Plese Enter A Month: ");

	cout << "\nNumber Of Days In Month    [" << Month << "]       Is: " << NumberOfDaysInMonth(Year, Month);
	cout << "\n\nNumber Of Hours In Month   [" << Month << "]       Is: " << NumberOfHoursInMonth(Year, Month);
	cout << "\n\nNumber Of Minutes In Month [" << Month << "]       Is: " << NumberOfMinutesInMonth(Year, Month);
	cout << "\n\nNumber Of Seconds In Month [" << Month << "]       Is: " << NumberOfSecondssInMonth(Year, Month);
}

int main()
{
	PrintResult();

	system("Pause>0");
}

