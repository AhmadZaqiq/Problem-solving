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

short NumberOfDaysFromTheBeginingOfTheYear(short Year, short Month, short Day)
{
	short TotalDays = 0;

	for (short i = 0; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInMonth(Year, i);
	}
	TotalDays += Day;

	return TotalDays;
}

stDate AddDaysToDate(short DaysToAdd, stDate Date)
{

	short RemainingDays = DaysToAdd + NumberOfDaysFromTheBeginingOfTheYear(Date.Year, Date.Month, Date.Day);
	short MonthDays = 0;

	Date.Month = 1;

	while (true)
	{
		MonthDays = NumberOfDaysInMonth(Date.Year, Date.Month);

		if (RemainingDays > MonthDays)
		{
			RemainingDays -= MonthDays;

			Date.Month++;

			if (Date.Month > 12)
			{
				Date.Month = 1;
				Date.Year++;
			}
		}
		else
		{
			Date.Day = RemainingDays;
			break;
		}
	}

	return Date;
}

void PrintResult()
{
	stDate Date = ReadFullDate();
	short DaysToAdd = ReadNumber("How Many Days U Want To Add? ");

	Date = AddDaysToDate(DaysToAdd, Date);

	cout << "Date After Adding [" << DaysToAdd << "] Days Is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year;
}

int main()
{
	PrintResult();

	system("Pause>0");
}

