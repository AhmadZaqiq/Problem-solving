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

bool IsFirstDayInMonth(stDate Date)
{
	return(Date.Day == 1);
}

bool IsFirstMonthInYear(short Month)
{
	return(Month == 1);
}

stDate DecreaseDateByOneDay(stDate Date)
{
	if (IsFirstDayInMonth(Date))
	{
		if (IsFirstMonthInYear(Date.Month))
		{
			Date.Month = 12;
			Date.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
			Date.Year--;
		}
		else
		{
			Date.Month--;
			Date.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
		}
	}

	else
	{
		Date.Day--;
	}

	return Date;
}

stDate DecreaseDateByXDays(stDate Date, short NumberOfDays)
{
	for (short i = 0; i < NumberOfDays; i++)
	{
		Date = DecreaseDateByOneDay(Date);
	}

	return Date;
}

stDate DecreaseDateByOneWeek(stDate Date)
{
	for (short i = 0; i < 7; i++)
	{
		Date = DecreaseDateByOneDay(Date);
	}

	return Date;
}

stDate DecreaseDateByXWeeks(stDate Date, short NumberOfWeeks)
{
	for (short i = 0; i < NumberOfWeeks; i++)
	{
		Date = DecreaseDateByOneWeek(Date);
	}

	return Date;
}

stDate DecreaseDateByOneMonth(stDate Date)
{
	if (Date.Month == 1)
	{
		Date.Month = 12;
		Date.Year--;
	}

	else
	{
		Date.Month--;
	}

	short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);

	if (Date.Day > NumberOfDaysInCurrentMonth)
	{
		Date.Day = NumberOfDaysInCurrentMonth;
	}

	return Date;
}

stDate DecreaseDateByXMonths(stDate Date, short NumberOfWeeks)
{
	for (short i = 0; i < NumberOfWeeks; i++)
	{
		Date = DecreaseDateByOneMonth(Date);
	}

	return Date;
}

stDate DecreaseDateByOneYear(stDate Date)
{
	Date.Year--;

	return Date;
}

stDate DecreaseDateByXYears(stDate Date, short NumberOfYears)
{
	for (short i = 0; i < NumberOfYears; i++)
	{
		Date = DecreaseDateByOneYear(Date);
	}

	return Date;
}

stDate DecreaseDateByXYears_Faster(stDate Date, short NumberOfYears)
{
	Date.Year -= NumberOfYears;

	return Date;
}

stDate DecreaseDateByOneDecade(stDate Date)
{
	for (short i = 0; i < 10; i++)
	{
		Date = DecreaseDateByOneYear(Date);
	}

	return Date;
}

stDate DecreaseDateByXDecades(stDate Date, short NumberOdDecades)
{
	for (short i = 0; i < NumberOdDecades; i++)
	{
		Date = DecreaseDateByOneDecade(Date);
	}

	return Date;
}

stDate DecreaseDateByXDecades_Faster(stDate Date, short NumberOdDecades)
{
	Date.Year = Date.Year - (NumberOdDecades * 10);

	return Date;
}

stDate DecreaseDateByOneCentury(stDate Date)
{
	for (short i = 0; i < 10; i++)
	{
		Date = DecreaseDateByOneDecade(Date);
	}

	return Date;
}

stDate DecreaseDateByOneMillennium(stDate Date)
{
	for (short i = 0; i < 10; i++)
	{
		Date = DecreaseDateByOneCentury(Date);
	}

	return Date;
}

void PrintResult()
{
	stDate Date = ReadFullDate();

	cout << "Date After:-\n\n";

	Date = DecreaseDateByOneDay(Date);
	cout << "01-Subtracting One Day Is:               " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXDays(Date, 10);
	cout << "02-Subtracting 10 Days Is:               " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneWeek(Date);
	cout << "03-Subtracting One Week Is:              " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXWeeks(Date, 10);
	cout << "04-Subtracting 10 Weeks Is:              " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneMonth(Date);
	cout << "05-Subtracting One Month Is:             " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXMonths(Date, 5);
	cout << "06-Subtracting 5 Weeks Is:               " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneYear(Date);
	cout << "07-Subtracting One Year Is:              " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXYears(Date, 10);
	cout << "08-Subtracting 10 Years Is:              " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXYears_Faster(Date, 10);
	cout << "09-Subtracting 10 Years (Faster) Is:     " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneDecade(Date);
	cout << "10-Subtracting One Decade Is:            " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXDecades(Date, 10);
	cout << "11-Subtracting 10 Decades Is:            " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXDecades_Faster(Date, 10);
	cout << "12-Subtracting 10 Decades (Faster) Is:   " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneCentury(Date);
	cout << "13-Subtracting One Century Is:           " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneMillennium(Date);
	cout << "14-Subtracting One Millennium Is:        " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

}

int main()
{
	PrintResult();

	system("Pause>0");
}
