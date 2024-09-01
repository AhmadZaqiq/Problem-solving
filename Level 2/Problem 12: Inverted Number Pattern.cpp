//Ahmad JR
#include<iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << "\n";
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

void PrintinvertedNumberPattern(int Number)
{
	for (int i = Number; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintinvertedNumberPattern(ReadPositiveNumber("Please Enter A Number: "));

	system("pause>0");

	return 0;
}

