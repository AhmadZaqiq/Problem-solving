//Ahmad JR
#include <iostream>

using namespace std;

enum enOddEven { Odd = 0, Even = 1 };

int ReadNumber()
{
	int Number;
	cout << "Enter The Number: ";
	cin >> Number;

	return Number;
}

enOddEven ChechIfOddOrEven(int Number)
{
	if (Number % 2 == 0)
		return enOddEven::Even;
	else
		return enOddEven::Odd;
}

int SumOfOddNumberFromNto1(int j)
{
	int Sum = 0;

	for (int i = 0; i <= j; i++)
	{
		if (ChechIfOddOrEven(i) == enOddEven::Odd)
			Sum += i;
	}

	return Sum;
}

void PrintSum(int Sum)
{
	cout << "The Sum=[" << Sum << "]";
}

int main()
{
	int j = ReadNumber();

	int Sum = SumOfOddNumberFromNto1(j);

	PrintSum(Sum);

	system("pause>0");

	return 0;
}

