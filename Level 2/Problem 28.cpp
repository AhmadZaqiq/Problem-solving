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
	cout << "Enter The Length Of Array:";
	cin >> ArrLength;

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

void FillCopyArray(int Arr[100], int ArrLength, int Arr2[100])
{
	for (int i = 0; i < ArrLength; i++)
	{
		Arr2[i] = Arr[i];
	}
}

int main()

{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength, Arr2[100];

	FillArrayWithRandomNumbers(Arr, ArrLength);

	cout << "Array Elements: [ ";

	PrintArray(Arr, ArrLength);

	cout << "]\n";

	FillCopyArray(Arr, ArrLength, Arr2);

	cout << "Copy Of Array Elements: [ ";

	PrintArray(Arr2, ArrLength);

	cout << "]\n";

	system("pause>0");

}
