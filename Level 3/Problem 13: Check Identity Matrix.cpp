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
			Matrix[i][j] = RandomNumber(1, 10);
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

bool IsIdentityMatrix(short Matrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (i == j && Matrix[i][j] != 1)
				return false;
			if (i != j && Matrix[i][j] != 0)
				return false;
		}
	}
	return true;
}

void PrintIfIdentity(bool Identity)
{
	if (Identity == true)
		printf("\nYes,  Matrix is Identity");
	else
		printf("\nNo, Matrix is NOT Identity");
}

void PrintFinalResults()
{
	short Matrix[3][3];
	bool IsIdentity = true;

	FillMatrix(Matrix, 3, 3);
	printf("Matrix1:-\n");
	PrintMatrix(Matrix, 3, 3);

	IsIdentity = IsIdentityMatrix(Matrix, 3, 3);
	PrintIfIdentity(IsIdentity);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}






