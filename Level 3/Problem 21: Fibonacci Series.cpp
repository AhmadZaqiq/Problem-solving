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

void FibonacciSeries()
{
	int Number = ReadNumber("Enter The Number: ");
	short Prev1 = 1, Prev2 = 0, FibNumber = 0, Temp = 0;

	printf("Fibonacci Series Of [%d] = 1 ", Number);

	for (short i = 2; i <= Number; i++)
	{
		FibNumber = Prev1 + Prev2;
		printf("%d ", FibNumber);
		Prev2 = Prev1;
		Prev1 = FibNumber;
	}
}

int main()
{
	FibonacciSeries();

	system("pause>0");

	return 0;
}

