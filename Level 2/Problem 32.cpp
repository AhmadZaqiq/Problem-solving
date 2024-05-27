//Ahmad JR
#include <iostream>
#include<cstdlib>

using namespace std;

int ReadPositiveNumber(string Massage)
{
	int Num = 0;
	do
	{
		cout << Massage;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayNumbers(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}

void ReverseArraysElements(int Arr[100], int Arr2[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		Arr2[i] = Arr[ArrLength - 1 - i];
	}
}

void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}

int main()

{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength, Arr2[100];

	ArrLength = ReadPositiveNumber("Enter The Length Of Arrays: ");

	FillArrayNumbers(Arr, ArrLength);

	cout << "Array Elements : [ ";

	PrintArray(Arr, ArrLength);

	cout << "]\n";

	ReverseArraysElements(Arr, Arr2, ArrLength);

	cout << "Array Elements In Reverse Odrder: [ ";

	PrintArray(Arr2, ArrLength);

	cout << "]\n";

	system("pause>0");

}


