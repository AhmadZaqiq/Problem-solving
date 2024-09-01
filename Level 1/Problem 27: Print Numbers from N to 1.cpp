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

void PrintNumbersFromNTo1()
{
	int j = ReadNumber();

	for (int i = j; i >= 1; i--)
		cout << i << endl;
}

int main()
{
	PrintNumbersFromNTo1();

	system("pause>0");

	return 0;
}
