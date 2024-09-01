//Ahmad JR
#include <iostream>
#include <cmath>

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

string DayOfWeekShortName(short DayOrder)
{
	string ArrDayName[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

	return ArrDayName[DayOrder];
}

void PrintResult()
{
	short Year = ReadNumber("Plese Enter A Year: ");
	short Month = ReadNumber("Plese Enter A Month: ");
	short Day = ReadNumber("Plese Enter A Day:");
	short DayOrder = DayOfWeekOrder(Year, Month, Day);

	cout << "\nDate        :" << Day << "/" << Month << "/" << Year << "\n\n";
	cout << "Day Order   :" << DayOrder << "\n\n";
	cout << "Day Name    :" << DayOfWeekShortName(DayOrder) << "\n\n";
}

int main()
{
	PrintResult();

	system("Pause>0");
}

