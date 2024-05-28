//Ahmad JR
#include <iostream>

using namespace std;

struct stDate
{
	short Year;
	short Month;
	short Day;
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

	cout << "\n";

	return Date;
}

bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month >12)
		return 0;

	short ArrOfMonthDays[12] = { 31,28 + isLeapYear(Year) ,31,30,31,30,31,31,30,31,30,31 };

	return ArrOfMonthDays[Month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date)
{
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}
	}
	else
	{
		Date.Day++;
	}

	return Date;
}

void SwapDates(stDate& Date1, stDate& Date2)
{
	stDate Temp;

	Temp.Year = Date1.Year;
	Temp.Month = Date1.Month;
	Temp.Day = Date1.Day;

	Date1.Year = Date2.Year;
	Date1.Month = Date2.Month;
	Date1.Day = Date2.Day;

	Date2.Year = Temp.Year;
	Date2.Month = Temp.Month;
	Date2.Day = Temp.Day;
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	short SwapflagValue = 1;

	if (!IsDate1BeforeDate2(Date1, Date2))
	{
		SwapflagValue = -1;

		SwapDates(Date1, Date2);
	}

	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;

		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days * SwapflagValue : Days * SwapflagValue;
}

void PrintResult()
{
	stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();

	cout << "Diffrence Is: " << GetDifferenceInDays(Date1, Date2) << " Day(s)\n\n";

	cout << "Diffrence (Including End Day) Is: " << GetDifferenceInDays(Date1, Date2, true) << " Day(s)";
}

int main()
{
	PrintResult();

	system("Pause>0");
}
