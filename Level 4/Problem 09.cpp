//Ahmad JR
#include <iostream>
#include <cmath>
#include<iomanip>
#include <string>
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

short DayOfWeekOrder(short Year, short Month, short Day)
{
	short a = floor((14 - Month) / 12);
	short y = Year - a;
	short m = Month + (12 * a) - 2;
	return  (Day + y + (short)floor(y / 4) - (short)floor(y / 100) +
		(short)floor(y / 400) + (short)floor((31 * m) / 12)) % 7;
}

short NumberOfDaysInMonth(short Year, short Month)
{
	if (Month < 1 || Month >12)
		return 0;

	short ArrOfMonthDays[12] = { 31,28 + IsLeapYear(Year) ,31,30,31,30,31,31,30,31,30,31 };

	return ArrOfMonthDays[Month - 1];
}

string MonthShortName(short Month)
{
	string ArrMonthName[12] =
	{
		"Jan", "Feb", "Mar", "Apr",
		"May", "Jun", "Jul", "Aug",
		"Sep", "Oct", "Nov", "Dec"
	};

	return ArrMonthName[Month - 1];
}

void PrintYearHeader(short Year)
{
	cout << "\n\n  _________________________________\n\n";

	cout << "           Calendar - " << Year;

	cout << "\n  _________________________________\n\n";
}

void PrintMonthHeader(short Month)
{
	string MonthName = MonthShortName(Month);

	cout << "  _______________" << MonthName << "_______________\n\n";
	cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n\n";
}

void PrintMonthsCalendar(short Year, short Month)
{
	PrintMonthHeader(Month);

	short NumberOfDays = NumberOfDaysInMonth(Year, Month);
	short Current = DayOfWeekOrder(Year, Month, 1);

	short i;

	for (i = 0; i < Current; i++)
		cout << "     ";

	for (short j = 1; j <= NumberOfDays; j++)
	{
		printf("%5d", j);

		if (++i == 7)
		{
			i = 0;
			cout << "\n";
		}
	}
	cout << "\n\n  _________________________________\n\n";
}

void PrintYearCalendar(short Year)
{
	PrintYearHeader(Year);

	for (short i = 1; i <= 12; i++)
		PrintMonthsCalendar(Year, i);
}

void PrintResult()
{
	short Year = ReadNumber("Plese Enter A Year: ");

	PrintYearCalendar(Year);
}

int main()
{
	PrintResult();

	system("Pause>0");
}