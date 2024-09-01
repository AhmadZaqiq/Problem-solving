//Ahmad JR
#include <iostream>

using namespace std;

short ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

void AddArrayElement(short Number, short Arr[100], short& ArrLength)
{
	ArrLength++;

	Arr[ArrLength - 1] = Number;
}

void AddMoreNumbersToArray(short Arr[100], short& ArrLength)
{
	bool AddMoreNumbers = true;

	do
	{
		AddArrayElement(ReadNumber("Please Enter A Number: "), Arr, ArrLength);

		cout << "Do U Want To Add More Numbers [0]:No , [1]: Yes ? ";

		cin >> AddMoreNumbers;

	} while (AddMoreNumbers);
}

void PrintArray(short Arr[100], short ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}

int main()
{
	short Arr[100], ArrLength = 0;

	AddMoreNumbersToArray(Arr, ArrLength);

	cout << "Array Length : " << ArrLength << "\n";
	cout << "Array Elemnts : ";

	PrintArray(Arr, ArrLength);

	system("pause>0");

	return 0;
}
