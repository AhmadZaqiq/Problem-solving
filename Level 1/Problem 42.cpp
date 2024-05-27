//Ahmad JR
#include <iostream>

using namespace std;

struct TimeInfo
{
	int Days, Hours, Minutes, seconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;


	} while (Number < 0);

	return Number;
}

TimeInfo ReadTime()
{
	TimeInfo Times;

	Times.seconds = ReadPositiveNumber("Enter The Number Of Seconds: ");
	Times.Minutes = ReadPositiveNumber("Enter The Number Of Minutes: ");
	Times.Hours = ReadPositiveNumber("Enter The Number Of Hours: ");
	Times.Days = ReadPositiveNumber("Enter The Number Of Days: ");

	return Times;
}

int CalculateTotalSeconds(TimeInfo Times)
{
	int TimeInSeconds = 0;

	TimeInSeconds += Times.Days * 24 * 60 * 60;
	TimeInSeconds += Times.Hours * 60 * 60;
	TimeInSeconds += Times.Minutes * 60;
	TimeInSeconds += Times.seconds;

	return  TimeInSeconds;
}

int main()
{
	int TimeDurationIS = CalculateTotalSeconds(ReadTime());

	cout << "Time Duration In Seconds: [" << TimeDurationIS << "] Seconds";

	system("pause>0");

	return 0;
}

