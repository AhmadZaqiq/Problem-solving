//Ahmad JR
#include <iostream>

using namespace std;

int ReadNumberOfHours(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

float HoursToDays(int Hours)
{
	return (float)Hours / 24;
}

float HoursToWeeks(int Hours)
{
	return (float)Hours / 168;
}

void PrintResults(int Hours)
{
	float HoursTDays = HoursToDays(Hours);
	float HoursTWeeks = HoursToWeeks(Hours);

	cout << "Number Of Hours:[" << Hours << "]\n\n";
	cout << "Number Of Days:[" << HoursTDays << "]\n\n";
	cout << "Number Of Weeks:[" << HoursTWeeks << "]\n\n";

}

int main()
{
	PrintResults(ReadNumberOfHours("Enter Number Of Hours: "));

	system("pause>0");

	return 0;
}
