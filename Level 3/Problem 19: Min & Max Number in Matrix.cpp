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

short FindMaxNumInMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short MaxValue = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (Matrix[i][j] > MaxValue)
				MaxValue = Matrix[i][j];
		}
	}
	return MaxValue;
}

short FindMinNumInMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short MinValue = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (Matrix[i][j] < MinValue)
				MinValue = Matrix[i][j];
		}
	}
	return MinValue;
}

void PrintFinalResults()
{
	short Matrix1[3][3];
	short MaxNumber = 0;
	short MinNumber = 0;

	FillMatrix(Matrix1, 3, 3);
	printf("Matrix1:-\n");
	PrintMatrix(Matrix1, 3, 3);

	MaxNumber = FindMaxNumInMatrix(Matrix1, 3, 3);
	MinNumber = FindMinNumInMatrix(Matrix1, 3, 3);

	printf("\nMax Number Is: %d \n", MaxNumber);
	printf("\nMin Number Is: %d \n", MinNumber);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}
