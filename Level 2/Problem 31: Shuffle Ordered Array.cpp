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

void Swap(int& Num1, int& Num2)
{
	int Temp;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
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
		Arr[i] = i + 1;
	}
}

void ArrayShuffule(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		Swap(Arr[RandomNumber(1, ArrLength) - 1], Arr[RandomNumber(1, ArrLength) - 1]);
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

	cout << "Array Before Shuffule: [ ";

	PrintArray(Arr, ArrLength);

	cout << "]\n";

	ArrayShuffule(Arr, ArrLength);

	cout << "Array After Shuffule: [ ";

	PrintArray(Arr, ArrLength);

	cout << "]\n";

	system("pause>0");
}

