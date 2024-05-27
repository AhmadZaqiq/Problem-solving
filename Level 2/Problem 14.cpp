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

void PrintinvertedLettersPattern(int Number)
{
	for (int i = Number + 65 - 1; i >= 65; i--)
	{
		for (int j = 1; j <= Number - (Number + 65 - 1 - i); j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	PrintinvertedLettersPattern(ReadPositiveNumber("Please Enter A Number: "));

	system("pause>0");

	return 0;
}
