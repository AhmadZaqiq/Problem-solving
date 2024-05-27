//Ahmad JR
#include <iostream>
#include<cstdlib>

using namespace std;

enum enPrimeNotprime { Prime = 0, NotPrime = 1 };

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}

void AddArrayElement(int Number, int Arr[100], int& ArrLength)
{
	ArrLength++;

	Arr[ArrLength - 1] = Number;
}

enPrimeNotprime CheckIfPrimeNumber(int Number)
{
	int M = sqrt(Number);

	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeNotprime::NotPrime;
	}
	return enPrimeNotprime::Prime;
}

void CopyPrimeNumbers(int Arr[100], int Arr2[100], int ArrLength, int& Arr2Length)
{
	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckIfPrimeNumber(Arr[i]) == enPrimeNotprime::Prime)
			AddArrayElement(Arr[i], Arr2, Arr2Length);
	}
}

int main()

{
	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], ArrLength = 0, Arr2Length = 0;

	cout << "Enter The Length Of Array:";
	cin >> ArrLength;

	FillArrayWithRandomNumbers(Arr, ArrLength);

	cout << "Array Elements: [ ";

	PrintArray(Arr, ArrLength);

	cout << "]\n";

	CopyPrimeNumbers(Arr, Arr2, ArrLength, Arr2Length);

	cout << "Copy Of Prime Elements: [ ";

	PrintArray(Arr2, Arr2Length);

	cout << "]\n";

	system("pause>0");
}

