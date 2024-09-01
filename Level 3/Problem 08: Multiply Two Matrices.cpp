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
		cout << "\n";
	}
}

void MultMatrix(short Matrix1[3][3], short Matrix2[3][3], short MulMatrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			MulMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}

void PrintFinalResults()
{
	short Matrix1[3][3], Matrix2[3][3], MulMatrix[3][3];

	FillMatrix(Matrix1, 3, 3);
	FillMatrix(Matrix2, 3, 3);

	printf("Matrix1:-\n\n");
	PrintMatrix(Matrix1, 3, 3);

	printf("\nMatrix2:-\n\n");
	PrintMatrix(Matrix2, 3, 3);

	MultMatrix(Matrix1, Matrix2, MulMatrix, 3, 3);

	printf("\nResults:-\n\n");
	PrintMatrix(MulMatrix, 3, 3);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}


