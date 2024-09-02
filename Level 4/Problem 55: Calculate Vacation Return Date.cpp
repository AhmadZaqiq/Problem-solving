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

	cout << "\n\n";

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

bool IsWeekend(short DayOrder)
{
	return (DayOrder == 4 || DayOrder == 5);
}

bool IsBusinessDay(short DayOrder)
{
	return (!IsWeekend(DayOrder));
}

stDate CalculateVacationReturnDate(stDate Date, short VacationDays)
{
	while (IsWeekend(DayOfWeekOrder(Date)))
	{
		Date = IncreaseDateByOneDay(Date);
	}

	short WeekEndCounter = 0;

	for (short i = 0; i <= VacationDays + WeekEndCounter; i++)
	{
		if (IsWeekend(DayOfWeekOrder(Date)))
			WeekEndCounter++;

		Date = IncreaseDateByOneDay(Date);
	}

	while (IsWeekend(DayOfWeekOrder(Date)))
	{
		Date = IncreaseDateByOneDay(Date);
	}

	return Date;
}

void PrintResult()
{

	cout << "Vacation Starts:\n";
	stDate Date = ReadFullDate();

	short VacationDays = ReadNumber("Please Enter Vacation Days: ");

	Date = CalculateVacationReturnDate(Date, VacationDays);
	short DayOrder = DayOfWeekOrder(Date);

	cout << "\n\n\n Return Date : " << DayOfWeekShortName(DayOrder) << ", " << Date.Day << "/" << Date.Month << "/" << Date.Year;

}

int main()
{
	PrintResult();

	system("Pause>0");
}

