//Ahmad JR
#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

int CalculateFactorial(int Num)
{
	int Factorial = 1;

	for (int i = Num; i >= 1; i--)
		Factorial *= i;

	return Factorial;
}

void PrintFactorial(int Factorial)
{
	cout << "The Factorial = [" << Factorial << "]";
}

int main()
{
	int Num = ReadNumber("Please Enter A Positive Number: ");

	PrintFactorial(CalculateFactorial(Num));

	system("pause>0");

	return 0;
}

