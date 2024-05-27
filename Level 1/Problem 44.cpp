//Ahmad JR
#include <iostream>

using namespace std;

enum enDays { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };

int ReadNumberInRange(string Message, int From, int To)
{
	int Day = 0;

	do {
		cout << Message;
		cin >> Day;
	} while (Day < From || Day > To);

	return Day;
}

enDays ReadNumberOfWeek()
{
	return (enDays)ReadNumberInRange("Plese Enter The Day Number: ", 1, 7);
}

string PrintDayOfWeek(enDays Days)
{
	switch (Days)
	{
	case enDays::Sun:
		return  "Today Is Sunday :)";
	case enDays::Mon:
		return  "Today Is Monday :)";
	case enDays::Tue:
		return  "Today Is Tuesday  :)";
	case enDays::Wed:
		return  "Today Is Wednesday :)";
	case enDays::Thu:
		return  "Today Is Thusday :)";
	case enDays::Fri:
		return  "Today Is Friday :)";
	case enDays::Sat:
		return  "Today Is Saturday :)";
	default:
		return "Invalid day";
	}
}

int main()
{
	cout << PrintDayOfWeek(ReadNumberOfWeek());

	system("pause>0");

	return 0;
}
