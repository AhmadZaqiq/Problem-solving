//Ahmad JR
#include <iostream>

using namespace std;

struct stInfo
{
	unsigned short Age;
	bool HasDriverLicense;
};

stInfo ReadInfo()
{
	stInfo Info;

	do
	{
		cout << "Enter The Age: ";
		cin >> Info.Age;

	} while (Info.Age <= 0 || Info.Age > 60);

	cout << "Enter If He/She Has A Drver License(1/0): ";
	cin >> Info.HasDriverLicense;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDriverLicense == 1);
}

void PrintInfo(stInfo Info)
{
	if (IsAccepted(Info))
	{
		cout << "Hierd";
	}
	else
	{
		cout << "Rejected";
	}
}

int main()
{
	PrintInfo(ReadInfo());

	system("pause>0");

	return 0;
}
