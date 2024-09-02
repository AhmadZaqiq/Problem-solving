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

void PrintResult()
{
	cout << "Enter Period 1:\n";
	stPeriod Period1 = ReadPeriod();

	cout << "Enter Period 2:\n";
	stPeriod Period2 = ReadPeriod();

	if (IsOverlap(Period1, Period2))
		cout << "Yes, Periods Overlaps.";

	else
		cout << "No, Periods Not Overlaps.";
}

int main()
{
	PrintResult();

	system("Pause>0");
}
