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

short SumOfMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short Sum = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Sum += Matrix[i][j];
		}
	}
	return Sum;
}

bool AreEqualMatrices(short Matrix1[3][3], short Matrix2[3][3])
{
	return (SumOfMatrix(Matrix1, 3, 3) == SumOfMatrix(Matrix2, 3, 3));
}

void PrintIfEqual(bool AreEqual)
{
	if (AreEqual == true)
		printf("\nYes, Matrices Are Equal");
	else
		printf("\nNo, Matrices Are NOT Equal");
}

void PrintFinalResults()
{
	short Matrix1[3][3], Matrix2[3][3];
	bool AreEqual = true;

	FillMatrix(Matrix1, 3, 3);
	printf("Matrix1:-\n");
	PrintMatrix(Matrix1, 3, 3);

	FillMatrix(Matrix2, 3, 3);
	printf("\nMatrix2:-\n");
	PrintMatrix(Matrix2, 3, 3);

	AreEqual = AreEqualMatrices(Matrix1, Matrix2);
	PrintIfEqual(AreEqual);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}





