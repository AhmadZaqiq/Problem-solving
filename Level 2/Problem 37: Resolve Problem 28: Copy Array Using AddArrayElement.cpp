//Ahmad JR
#include <iostream>
#include<cstdlib>

using namespace std;

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

void CopyArrayUsingArrayElements(int Arr[100], int Arr2[100], int ArrLength, int& Arr2Length)
{
	for (int i = 0; i < ArrLength; i++)
	{
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

	CopyArrayUsingArrayElements(Arr, Arr2, ArrLength, Arr2Length);

	cout << "Copy Of Array Elements: [ ";

	PrintArray(Arr2, Arr2Length);

	cout << "]\n";

	system("pause>0");


}

