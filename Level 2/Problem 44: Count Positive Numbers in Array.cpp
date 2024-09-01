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
		Arr[i] = RandomNumber(-100, 100);
	}
}

void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}

int PositiveCount(int Arr[100], int Arr2[100], int ArrLength, int& Arr2Length)
{
	int Count = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (Arr[i] >= 0)

			Count++;
	}
	return  Count;
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

	cout << "Positive Numbesr Count is : [" << PositiveCount(Arr, Arr2, ArrLength, Arr2Length);

	cout << "]\n";

	system("pause>0");
}
