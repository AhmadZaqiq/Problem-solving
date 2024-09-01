//Ahmad JR
#include <iostream>
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

void PrintMiddleRowOfMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short MiddleRow = Rows / 2;

	for (short j = 0; j < Columns; j++)
	{
		printf("%0*d ", 2, Matrix[MiddleRow][j]);
	}
}

void PrintMiddleColOfMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short MiddleCol = Columns / 2;

	for (short i = 0; i < Rows; i++)
	{
		printf("%0*d ", 2, Matrix[i][MiddleCol]);
	}
}

void PrintFinalResults()
{
	short Matrix[3][3];

	FillMatrix(Matrix, 3, 3);

	printf("Matrix1:-\n\n");
	PrintMatrix(Matrix, 3, 3);

	printf("\nMiddle Row Of Matrix Is: \n\n");
	PrintMiddleRowOfMatrix(Matrix, 3, 3);

	printf("\n\nMiddle Col Of Matrix Is: \n\n");
	PrintMiddleColOfMatrix(Matrix, 3, 3);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");


	return 0;
}



