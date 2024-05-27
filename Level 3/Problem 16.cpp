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
			Matrix[i][j] = RandomNumber(0, 2);
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

bool IsSparseMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short ZeroCount = CountNumberinMatrix(Matrix, 3, 3, 0), ArrSize = Rows * Columns;

	return (ZeroCount >= ArrSize / 2);
}

void PrintIfSparse(bool Sparse)
{
	if (Sparse == true)
		printf("\nYes,  Matrix is Sparse ");
	else
		printf("\nNo, Matrix is NOT Sparse ");
}

void PrintFinalResults()
{
	short Matrix[3][3];
	bool IsSparse = true;

	FillMatrix(Matrix, 3, 3);
	printf("Matrix1:-\n");
	PrintMatrix(Matrix, 3, 3);

	IsSparse = IsSparseMatrix(Matrix, 3, 3);
	PrintIfSparse(IsSparse);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}
