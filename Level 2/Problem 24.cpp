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
	cout << "Array Elements: [ ";

	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "]\n";
}

int MaxNumberInArray(int Arr[100], int ArrLength)
{
	int Max = 0;

	for (int i = 0; i < ArrLength; i++)
	{
		if (Arr[i] > Max)
			Max = Arr[i];
	}

	return Max;
}

int main()

{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength;

	FillArrayWithRandomNumbers(Arr, ArrLength);
	PrintArray(Arr, ArrLength);
	cout << "Max Number is: " << MaxNumberInArray(Arr, ArrLength);

	system("pause>0");

}


