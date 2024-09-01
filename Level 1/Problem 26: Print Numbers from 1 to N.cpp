//Ahmad JR
#include <iostream>

using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Enter The Number: ";
	cin >> Number;

	return Number;
}

void PrintNumbersToN()
{
	int j = ReadNumber();

	for (int i = 1; i <= j; i++)
		cout << i << endl;
}

int main()
{
	PrintNumbersToN();

	system("pause>0");

	return 0;
}

