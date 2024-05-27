//Ahmad JR
#include <iostream>

using namespace std;

short ReadNumber(string Message)
{
	short Number = 0;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 0 || Number>23);

	return Number;
}

void FibonacciSeriesUsingRecursion(short Number, short Prev1, short Prev2)
{
	short FibNumber = Prev1 + Prev2;

	printf("%d ", FibNumber);

	Prev2 = Prev1;
	Prev1 = FibNumber;

	if (Number > 2)
		FibonacciSeriesUsingRecursion(Number - 1, Prev1, Prev2);
}

int main()
{
	int Number = ReadNumber("Enter The Number: ");

	printf("Fibonacci Series Of [%d] = 1 ", Number);

	FibonacciSeriesUsingRecursion(Number, 1, 0);

	system("pause>0");

	return 0;
}


