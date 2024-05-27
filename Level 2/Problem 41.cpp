//Ahmad JR
#include <iostream>

using namespace std;

void ReadArray(int Arr[6], int& ArrLength)
{
	ArrLength = 6;

	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 30;
	Arr[4] = 20;
	Arr[5] = 10;
}

void PrintArray(int Arr[6], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}

bool ISPalindromeArray(int Arr[6], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)

	{
		if (Arr[i] != Arr[ArrLength - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int Arr[6], ArrLength = 0;

	ReadArray(Arr, ArrLength);

	cout << "Array Elements: [";

	PrintArray(Arr, ArrLength);

	cout << "]\n";

	if (ISPalindromeArray(Arr, ArrLength))
		cout << "Yes, Array Is Palindrome ! ";
	else
		cout << "No, Array Is Not Palindrome... ";

	system("pause>0");
}