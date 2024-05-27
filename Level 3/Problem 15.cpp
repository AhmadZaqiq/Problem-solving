//Ahmad JR
#include <iostream>
#include <ctime>
#include<iomanip>

using namespace std;

short ReanNumber(string Message)
{
	short Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 0 || Number>100);

	return Number;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrix(short Matrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Matrix[i][j] = RandomNumber(1, 15);
		}
	}
}

void PrintMatrix(short Matrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			printf("%0*d   ", 2, Matrix[i][j]);
		}
		printf("\n");
	}
}

short CountNumberinMatrix(short Matrix[3][3], short Rows, short Columns, short Number)
{
	short NumberCount = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (Matrix[i][j] == Number)
				NumberCount++;
		}
	}
	return NumberCount;
}

void PrintFinalResults()
{
	short Matrix[3][3];
	short Number = 0, Counter = 0;

	FillMatrix(Matrix, 3, 3);
	printf("Matrix1:-\n");
	PrintMatrix(Matrix, 3, 3);

	Number = ReanNumber("Enter The Number To Count In Matrix: ");
	Counter = CountNumberinMatrix(Matrix, 3, 3, Number);

	printf("Numner %d count in Matrix is [%d] ", Number, Counter);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}
