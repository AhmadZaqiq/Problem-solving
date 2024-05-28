//Ahmad JR
#include <iostream>

using namespace std;

struct stDate
{
	short Day, Month, Year;
};

stDate GetSystemDate()
{
	stDate Date;

	time_t currentTime;
	time(&currentTime);

	tm localTime;
	localtime_s(&localTime, &currentTime);

	Date.Year = localTime.tm_year + 1900;
	Date.Month = localTime.tm_mon + 1;
	Date.Day = localTime.tm_mday;

	return Date;
}

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

	cout << "\n\n";

	return Date;
}

stDate GetEndOfYearDate(stDate Date1)
{
	stDate Date2;
	Date2.Day = 31;
	Date2.Month = 12;
	Date2.Year = Date1.Year;

	return Date2;
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

stDate GetEndOfMonthDate(stDate Date1)
{
	stDate Date2;
	Date2.Day = NumberOfDaysInMonth(Date1.Year, Date1.Month);
	Date2.Month = Date1.Month;
	Date2.Year = Date1.Year;

	return Date2;
}

short DayOfWeekOrder(short Year, short Month, short Day)
{
	short a = floor((14 - Month) / 12);
	short y = Year - a;
	short m = Month + (12 * a) - 2;
	return  (Day + y + (short)floor(y / 4) - (short)floor(y / 100) +
		(short)floor(y / 400) + (short)floor((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(stDate Date)
{
	return	DayOfWeekOrder(Date.Year, Date.Month, Date.Day);
}

string DayOfWeekShortName(short DayOrder)
{
	string ArrDayName[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

	return ArrDayName[DayOrder];
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month >12)
		return 0;

	short ArrOfMonthDays[12] = { 31,28 + IsLeapYear(Year) ,31,30,31,30,31,31,30,31,30,31 };

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

int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;

	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days : Days;
}

bool IsEndOfWeek(short DayOrder)
{
	return (DayOrder == 6);
}

bool IsWeekend(short DayOrder)
{
	return (DayOrder == 4 || DayOrder == 5);
}

bool IsBusinessDay(short DayOrder)
{
	return (!IsWeekend(DayOrder));
}

short DaysUntilTheEndOfWeek(short DayOrder)
{
	return 6 - DayOrder;
}

short DaysUntilTheEndOfMonth(stDate Date1, stDate Date2)
{
	return	GetDifferenceInDays(Date1, Date2, true);
}

short DaysUntilTheEndOfYear(stDate Date1, stDate Date2)
{
	return	GetDifferenceInDays(Date1, Date2, true);
}

void PrintResult()
{
	stDate Date = GetSystemDate();
	short DayOrder = DayOfWeekOrder(Date);

	cout << "Today Is: " << DayOfWeekShortName(DayOrder) << " , " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n\n";


	cout << "Is It End Of Week? \n";
	if (IsEndOfWeek(DayOrder))
		cout << "Yes, End Of Week.\n";
	else
		cout << "No, Not End Of Week.\n";

	cout << "\nIs It Weekend? \n";
	if (IsWeekend(DayOrder))
		cout << "Yes, Weekend.\n";
	else
		cout << "No, Not Weekend.\n";

	cout << "\nIs It Business Day? \n";
	if (IsBusinessDay(DayOrder))
		cout << "Yes, BusinessDay.\n\n";
	else
		cout << "No, Not BusinessDay.\n\n";


	cout << "Days Until End Of Week:  " << DaysUntilTheEndOfWeek(DayOrder) << " Day(s)\n\n";

	cout << "Days Until End Of Month: " << DaysUntilTheEndOfMonth(Date, GetEndOfMonthDate(Date)) << " Day(s)\n\n";

	cout << "Days Until End Of Year: " << DaysUntilTheEndOfYear(Date, GetEndOfYearDate(Date)) << " Day(s)\n\n";
}

int main()
{
	PrintResult();

	system("Pause>0");
}
