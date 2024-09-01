//Ahmad JR
#include <iostream>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
	int Number;
	cout << "Enter The Number: ";
	cin >> Number;

	return Number;
}

enNumberType CheckNumberType(int Number)
{
	if (Number % 2 == 0)
	{
		return enNumberType::Even;
	}
	else
	{
		return enNumberType::Odd;
	}
}

void PrintResult(enNumberType NumberType)
{
	cout << "The Number is ";

	if (NumberType == enNumberType::Even)
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}
}

int main()
{
	PrintResult(CheckNumberType(ReadNumber()));

	system("pause>0");

	return 0;
}
