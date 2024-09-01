//Ahmad JR
#include <iostream>
#include<cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num = 0;

	cout << Message;
	cin >> Num;

	return Num;
}

void ReadArray(int Arr[100], int& ArrLength)
{
	cout << "Enter Number Of Elements: ";
	cin >> ArrLength;

	cout << "Enter Array Elements:-\n";

	for (int i = 0; i < ArrLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> Arr[i];
	}
}

void PrintNumber(int Arr[100], int ArrLength)
{
	cout << "Original Array : [ ";

	for (int i = 0; i < ArrLength; i++)
	{

		cout << Arr[i] << " ";
	}

	cout << "]\n\n";
}

int TimesRepeted(int Arr[100], int ArrLength, int NumberToCheck)
{
	int Counter = 0;

	for (int i = 0; i < ArrLength; i++)
	{
		if (NumberToCheck == Arr[i])
			Counter++;
	}

	return Counter;
}

int main()

{
	int Arr[100], ArrLength, NumberToCheck;

	ReadArray(Arr, ArrLength);
	PrintNumber(Arr, ArrLength);

	NumberToCheck = ReadPositiveNumber("Enter The Number You Want To Check: ");

	cout << "Number:" << NumberToCheck << " Is Repeated "
		<< TimesRepeted(Arr, ArrLength, NumberToCheck) << " Time(s) ";

	system("pause>0");

}


