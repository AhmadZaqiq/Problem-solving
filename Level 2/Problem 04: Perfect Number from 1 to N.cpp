//Ahmad JR
#include<iostream>

using namespace std;

int ReadPositiveNumber(string Massage)
{
	int Num = 0;
	do
	{
		cout << Massage << "\n";
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

bool IsPerfectNumber(int Number)
{
	int Sum = 0;
	int CheckNumber = Number / 2;

	for (int i = 1; i <= CheckNumber; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
	cout << "Perfect Numbers From 1 To " << Number << " Are:- " << endl;

	for (int i = 1; i <= Number; i++)
	{
		if (IsPerfectNumber(i))
			cout << i << endl;
	}
}

int main()
{
	PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter The Number: "));

	system("pause>0");

	return 0;
}
