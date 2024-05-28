//Ahmad JR
#include <iostream>

using namespace std;

enum enDateCompare { Before = -1, Equal = 0, After = 1 };

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

struct stPeriod
{
	stDate StartDate;
	stDate EndDate;
};

stPeriod ReadPeriod()
{
	stPeriod Period;

	cout << "Enter Start Date:\n\n";
	Period.StartDate = ReadFullDate();

	cout << "Enter End Date:\n\n";
	Period.EndDate = ReadFullDate();

	return Period;
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualToDate2(stDate Date1, stDate Date2)
{
	return(Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day);
}

bool IsDate1AfterThanDate2(stDate Date1, stDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualToDate2(Date1, Date2));
}

enDateCompare CompareDates(stDate Date1, stDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;

	if (IsDate1EqualToDate2(Date1, Date2))
		return enDateCompare::Equal;

	return enDateCompare::After;
}

bool IsOverlap(stPeriod Period1, stPeriod Period2)
{
	if (
		(CompareDates(Period2.EndDate, Period1.StartDate) == enDateCompare::Before)
		||
		(CompareDates(Period2.StartDate, Period1.EndDate) == enDateCompare::After)
		)
		return false;
	else
		return true;

}

bool IsLeapYear(short Year)
{
	return((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
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

int PeriodLengthInDays(stPeriod Period, bool IncludeEndDay = false)
{
	return GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludeEndDay);
}

bool IsDateInPeriod(stPeriod Period, stDate Date)
{
	if (
		(CompareDates(Date, Period.StartDate) == enDateCompare::Before)
		||
		(CompareDates(Date, Period.EndDate) == enDateCompare::After)
		)
		return false;
	else
		return true;
}

short CountOverlapDays(stPeriod Period1, stPeriod Period2)
{
	int Period1Length = PeriodLengthInDays(Period1, true);
	int Period2Length = PeriodLengthInDays(Period2, true);
	short OverlapsDays = 0;

	if (!IsOverlap(Period1, Period2))
	{
		cout << "\nSorry, Periods Not Overlaps.\n\n";
		return 0;
	}

	if (Period1Length < Period2Length)
	{
		while (IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
		{
			if (IsDateInPeriod(Period2, Period1.StartDate))
				OverlapsDays++;

			Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
		}
	}

	else

	{
		while (IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate))
		{
			if (IsDateInPeriod(Period1, Period2.StartDate))
				OverlapsDays++;

			Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
		}
	}

	return OverlapsDays;
}

void PrintResult()
{
	cout << "Enter Period 1:\n";
	stPeriod Period1 = ReadPeriod();

	cout << "Enter Period 2:\n";
	stPeriod Period2 = ReadPeriod();

	cout << "Overlaps Days Count Is: " << CountOverlapDays(Period1, Period2);
}

int main()
{
	PrintResult();

	system("Pause>0");
}

