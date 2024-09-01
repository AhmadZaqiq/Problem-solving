//Ahmad JR
#include <iostream>

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

void PrintResult()
{
	short Year = ReadNumber("Plese Enter A Year: ");

	if (IsLeapYear(Year))
		cout << "Yes, [" << Year << "] Is A Leap Year...";

	else
		cout << "No, [" << Year << "] Is Not A Leap Year...";
}

int main()
{
	PrintResult();

	system("Pause>0");
}



