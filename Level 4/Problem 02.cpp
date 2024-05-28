//Ahmad JR
#include <iostream>
#include <string>
using namespace std;

short ReadNumber(string Message)
{
	short Number = 0;
	cout << Message;
	cin >> Number;

	return Number;
}

bool IsLeappYear(short Year)
{
	if (Year % 400 == 0)
		return true;

	return(Year % 4 == 0 && Year % 100 != 0);
}

void PrintResult()
{
	short Year = ReadNumber("Plese Enter A Year: ");

	if (IsLeappYear(Year))
		cout << "Yes, [" << Year << "] Is A Leap Year...";

	else
		cout << "No, [" << Year << "] Is Not A Leap Year...";
}

int main()
{
	PrintResult();

	system("Pause>0");
}

