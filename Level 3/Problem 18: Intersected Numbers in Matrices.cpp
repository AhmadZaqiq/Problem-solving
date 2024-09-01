//Ahmad JR
#include <iostream>
#include <ctime>
#include<iomanip>

using namespace std;

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

void FindIntersectedNumbers(short Matrix1[3][3], short Matrix2[3][3], short Rows, short Columns)
{
	short Number = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Number = Matrix1[i][j];
			if (FindNumberinMatrix(Matrix2, 3, 3, Number))
				printf("%d ", Number);
		}
	}
}

void PrintFinalResults()
{
	short Matrix1[3][3], Matrix2[3][3];

	FillMatrix(Matrix1, 3, 3);
	printf("Matrix1:-\n");
	PrintMatrix(Matrix1, 3, 3);

	FillMatrix(Matrix2, 3, 3);
	printf("\nMatrix2:-\n");
	PrintMatrix(Matrix2, 3, 3);

	printf("Intersected Numbers Are:\n\n");
	FindIntersectedNumbers(Matrix1, Matrix2, 3, 3);

}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}


