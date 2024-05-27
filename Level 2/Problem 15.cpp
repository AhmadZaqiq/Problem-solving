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

void PrintLettersPattern(int Number)
{
	for (int i = 65; i <= Number + 65 - 1; i++)
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
	PrintLettersPattern(ReadPositiveNumber("Please Enter A Number: "));

	system("pause>0");

	return 0;
}

