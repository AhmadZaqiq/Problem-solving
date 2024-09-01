//Ahmad JR
#include <iostream>
#include<cstdlib>

using namespace std;

int ReadPositiveNumber(string Massage)
{
	int Num = 0;
	do
	{
		cout << Massage << "\n";
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int ArrLength)
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

void SumOfTwoArrays(int Arr[100], int ArrLength, int Arr2[100])
{
	int ArrSum[200];

	for (int i = 0; i < ArrLength; i++)
	{
		ArrSum[i] = Arr[i] + Arr2[i];

		cout << ArrSum[i] << " ";
	}
}

int main()

{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength, Arr2[100];

	ArrLength = ReadPositiveNumber("Enter The Length Of Arrays:");

	FillArrayWithRandomNumbers(Arr, ArrLength);

	cout << "Array 1 Elements: [ ";

	PrintArray(Arr, ArrLength);

	cout << "]\n";

	FillArrayWithRandomNumbers(Arr2, ArrLength);

	cout << "Array 2 Elements: [ ";

	PrintArray(Arr2, ArrLength);

	cout << "]\n";

	cout << "Sum Of 2 Arrays Elements: [ ";

	SumOfTwoArrays(Arr, ArrLength, Arr2);

	cout << "]\n";

	system("pause>0");
}

