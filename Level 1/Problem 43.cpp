//Ahmad JR

#include <iostream>

using namespace std;

struct stTimeInfo
{
	int Days, Hours, Minutes, Seconds;
};

int ReadTotalSeconds(string Message)
{
	int TotalSeconds = 0;

	do {
		cout << Message;
		cin >> TotalSeconds;


	} while (TotalSeconds < 0);

	return TotalSeconds;
}

stTimeInfo CalculateTimestoSeconds(int TotalSeconds)
{
	stTimeInfo Times;
	int Reminder = 0;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHours = 60 * 60;
	const int SecondsPerMinutes = 60;

	Times.Days = TotalSeconds / SecondsPerDay;
	Reminder = TotalSeconds % SecondsPerDay;

	Times.Hours = Reminder / SecondsPerHours;
	Reminder = Reminder % SecondsPerHours;

	Times.Minutes = Reminder / SecondsPerMinutes;
	Reminder = Reminder % SecondsPerMinutes;

	Times.Seconds = Reminder;

	return Times;
}

void PrintTimeInSeconds(stTimeInfo Times)
{
	cout << "\n";
	cout << Times.Days << ":";
	cout << Times.Hours << ":";
	cout << Times.Minutes << ":";
	cout << Times.Seconds << "\n";
}

int main()
{
	int TotalSeconds = ReadTotalSeconds("Enter The Number Of Seconds: ");

	PrintTimeInSeconds(CalculateTimestoSeconds(TotalSeconds));

	system("pause>0");

	return 0;
}
