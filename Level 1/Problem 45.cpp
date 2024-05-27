//Ahmad JR
#include <iostream>

using namespace std;

enum enMonth { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

int ReadNumberInRange(string Message, int From, int To)
{
	int Day = 0;

	do {
		cout << Message;
		cin >> Day;
	} while (Day < From || Day > To);

	return Day;
}

enMonth ReadMonth()
{
	return (enMonth)ReadNumberInRange("Plese Enter The Day Month: ", 1, 12);
}

string PrintMonth(enMonth Days)
{
	switch (Days)
	{
	case enMonth::Jan:
		return  "Month Is January :)";
	case enMonth::Feb:
		return  "Month Is February :)";
	case enMonth::Mar:
		return  "Month Is March :)";
	case enMonth::Apr:
		return  "Month Is April :)";
	case enMonth::May:
		return  "Month Is May :)";
	case enMonth::Jun:
		return  "Month Is June :)";
	case enMonth::Jul:
		return  "Month Is July :)";
	case enMonth::Aug:
		return  "Month Is Augest :)";
	case enMonth::Sep:
		return  "Month Is September :)";
	case enMonth::Oct:
		return  "Month Is October :)";
	case enMonth::Nov:
		return  "Month Is November :)";
	case enMonth::Dec:
		return  "Month Is December :)";
	default:
		return "Invalid Month";
	}
}

int main()
{
	cout << PrintMonth(ReadMonth());

	system("pause>0");

	return 0;
}
