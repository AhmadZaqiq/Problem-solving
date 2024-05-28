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

bool IsLastDayInMonth(stDate Date)
{
	return(Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month));
}

bool IsLastMonthInYear(short Month)
{
	return(Month == 12);
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
			Date.Month++;
			Date.Day = 1;
		}
	}

	else
	{
		Date.Day++;
	}

	return Date;
}

stDate IncreaseDateByXDays(stDate Date, short NumberOfDays)
{
	for (short i = 0; i < NumberOfDays; i++)
	{
		Date = IncreaseDateByOneDay(Date);
	}

	return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{
	for (short i = 0; i < 7; i++)
	{
		Date = IncreaseDateByOneDay(Date);
	}

	return Date;
}

stDate IncreaseDateByXWeeks(stDate Date, short NumberOfWeeks)
{
	for (short i = 0; i < NumberOfWeeks; i++)
	{
		Date = IncreaseDateByOneWeek(Date);
	}

	return Date;
}

stDate IncreaseDateByOneMonth(stDate Date)
{
	if (Date.Month == 12)
	{
		Date.Month = 1;
		Date.Year++;
	}

	else
	{
		Date.Month++;
	}

	short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);

	if (Date.Day > NumberOfDaysInCurrentMonth)
	{
		Date.Day = NumberOfDaysInCurrentMonth;
	}

	return Date;
}

stDate IncreaseDateByXMonths(stDate Date, short NumberOfWeeks)
{
	for (short i = 0; i < NumberOfWeeks; i++)
	{
		Date = IncreaseDateByOneMonth(Date);
	}

	return Date;
}

stDate IncreaseDateByOneYear(stDate Date)
{
	Date.Year++;

	return Date;
}

stDate IncreaseDateByXYears(stDate Date, short NumberOfYears)
{
	for (short i = 0; i < NumberOfYears; i++)
	{
		Date = IncreaseDateByOneYear(Date);
	}

	return Date;
}

stDate IncreaseDateByXYears_Faster(stDate Date, short NumberOfYears)
{
	Date.Year += NumberOfYears;

	return Date;
}

stDate IncreaseDateByOneDecade(stDate Date)
{
	for (short i = 0; i < 10; i++)
	{
		Date = IncreaseDateByOneYear(Date);
	}

	return Date;
}

stDate IncreaseDateByXDecades(stDate Date, short NumberOdDecades)
{
	for (short i = 0; i < NumberOdDecades; i++)
	{
		Date = IncreaseDateByOneDecade(Date);
	}

	return Date;
}

stDate IncreaseDateByXDecades_Faster(stDate Date, short NumberOdDecades)
{
	Date.Year = Date.Year + (NumberOdDecades * 10);

	return Date;
}

stDate IncreaseDateByOneCentury(stDate Date)
{
	for (short i = 0; i < 10; i++)
	{
		Date = IncreaseDateByOneDecade(Date);
	}

	return Date;
}

stDate IncreaseDateByOneMillennium(stDate Date)
{
	for (short i = 0; i < 10; i++)
	{
		Date = IncreaseDateByOneCentury(Date);
	}

	return Date;
}

void PrintResult()
{
	stDate Date = ReadFullDate();

	cout << "Date After:-\n\n";

	Date = IncreaseDateByOneDay(Date);
	cout << "01-Adding One Day Is:               " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXDays(Date, 10);
	cout << "02-Adding 10 Days Is:               " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneWeek(Date);
	cout << "03-Adding One Week Is:              " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXWeeks(Date, 10);
	cout << "04-Adding 10 Weeks Is:              " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneMonth(Date);
	cout << "05-Adding One Month Is:             " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXMonths(Date, 5);
	cout << "06-Adding 5 Weeks Is:               " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneYear(Date);
	cout << "07-Adding One Year Is:              " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXYears(Date, 10);
	cout << "08-Adding 10 Years Is:              " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXYears_Faster(Date, 10);
	cout << "09-Adding 10 Years (Faster) Is:     " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneDecade(Date);
	cout << "10-Adding One Decade Is:            " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXDecades(Date, 10);
	cout << "11-Adding 10 Decades Is:            " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXDecades_Faster(Date, 10);
	cout << "12-Adding 10 Decades (Faster) Is:   " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneCentury(Date);
	cout << "13-Adding One Century Is:           " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneMillennium(Date);
	cout << "14-Adding One Millennium Is:        " << Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";
}

int main()
{
	PrintResult();

	system("Pause>0");
}
