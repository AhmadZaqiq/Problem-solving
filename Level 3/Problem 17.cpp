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
			Matrix[i][j] = RandomNumber(1, 99);
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

bool  FindNumberinMatrix(short Matrix[3][3], short Rows, short Columns, short Number)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (Matrix[i][j] == Number)
				return true;
		}
	}
	return false;
}

void PrintFinalResults()
{
	short Matrix[3][3];
	bool IsExists = true;
	short Number = 0;

	FillMatrix(Matrix, 3, 3);
	printf("Matrix1:-\n");
	PrintMatrix(Matrix, 3, 3);

	Number = ReanNumber("\nPlease enter a number to look for in matrix: ");
	IsExists = FindNumberinMatrix(Matrix, 3, 3, Number);

	if (IsExists)
		printf("Yes, It Is There.");
	else
		printf("No, It Is NOT There.");
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}

