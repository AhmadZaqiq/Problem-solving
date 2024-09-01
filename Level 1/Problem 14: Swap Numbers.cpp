//Ahmad JR
#include <iostream>

using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Enter The First Number: ";
	cin >> Num1;

	cout << "Enter The Second Number: ";
	cin >> Num2;
}

void SwapNumbers(int& Num1, int& Num2)
{
	int Temp;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void PrintNumbers(int Num1, int Num2)
{
	cout << "First Number Before Swap [" << Num1 << "]\n";
	cout << "Second Number Before Swap [" << Num2 << "]\n";
}

int main()
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	SwapNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);

	system("pause>0");

	return 0;
}
