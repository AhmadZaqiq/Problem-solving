//Ahmad JR

#include <iostream>

using namespace std;

void PrintTableHedear()
{
	cout << "\n\n\t\t\tMultiplcation TableFrom 1 To 10\n\n\n\n\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n---------------------------------------------------------------------------------------";
}

string ColumnSeparator(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void MultiplcationTable()
{
	PrintTableHedear();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << "\n" << i << ColumnSeparator(i) << "\t";

		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
	}
}

int main()
{
	MultiplcationTable();

	system("pause>0");

	return 0;
}
