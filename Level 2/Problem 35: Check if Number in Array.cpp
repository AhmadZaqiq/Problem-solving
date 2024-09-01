//Ahmad JR
#include <iostream>
#include<cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num = 0;
	do {
		cout << Message << "";
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

short FindNumberAndPositionInArray(int Arr[100], int ArrLength, short NumberToSearch)
{
	for (int i = 0; i < ArrLength; i++)

	{
		if (Arr[i] == NumberToSearch)
		{
			return i;
		}
	}

	return -1;
}

bool SearchNumberInArray(int Arr[100], int ArrLength, short NumberToSearch)
{
	return FindNumberAndPositionInArray(Arr, ArrLength, NumberToSearch) != -1;
}

int main()

{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength;
	short NumberToSearch = 0;

	ArrLength = ReadPositiveNumber("Enter The Length Of Array: ");

	FillArrayWithRandomNumbers(Arr, ArrLength);

	cout << "Array Elements: [ ";

	PrintArray(Arr, ArrLength);

	cout << "]\n";

	NumberToSearch = ReadPositiveNumber("Please Enter A Number To Search For: ");

	cout << "Number U Are Looking For is: " << NumberToSearch << '\n';

	if (!SearchNumberInArray(Arr, ArrLength, NumberToSearch))

	{
		cout << "No, The Number Is Not Found :-(  " << '\n';
	}

	else

		cout << "Yes, The Number Is Found ;) " << '\n';

	system("pause>0");
}


