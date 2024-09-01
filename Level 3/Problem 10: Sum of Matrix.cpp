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

void PrintFinalResults()
{
	short Matrix[3][3];
	short Sum = 0;

	FillMatrix(Matrix, 3, 3);

	printf("Matrix1:-\n");
	PrintMatrix(Matrix, 3, 3);

	Sum = SumOfMatrix(Matrix, 3, 3);
	printf("THe Sum Of Matrix is: %d", Sum);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}




