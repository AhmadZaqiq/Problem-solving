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

bool IsDate1EqualToDate2(stDate Date1, stDate Date2)
{
	return(Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day);
}

void PrintResult()
{
	stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();

	if (IsDate1EqualToDate2(Date1, Date2))
	{
		cout << "Yes, Date [" << Date1.Day << "/" << Date1.Month << "/" << Date1.Year
			<< "] Is Equal To Date [" << Date2.Day << "/" << Date2.Month << "/" << Date2.Year << "]";
	}

	else
	{
		cout << "No, Date [" << Date1.Day << "/" << Date1.Month << "/" << Date1.Year
			<< "] Is Not Equal To Date [" << Date2.Day << "/" << Date2.Month << "/" << Date2.Year << "]";
	}
}

int main()
{
	PrintResult();

	system("Pause>0");
}

