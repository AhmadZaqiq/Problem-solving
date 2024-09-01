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

bool CheckPalindromeMatrix(short Matrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns / 2; j++)
		{
			if (Matrix[i][j] != Matrix[i][Columns - 1 - j])
			{
				return false;
			}
		}
	}
	return true;
}

void PrintFinalResults()
{
	short Matrix1[3][3];

	FillMatrix(Matrix1, 3, 3);
	printf("Matrix1:-\n");
	PrintMatrix(Matrix1, 3, 3);

	if (CheckPalindromeMatrix(Matrix1, 3, 3))
		printf("Yes: Matrix Is Palindrome");

	else
		printf("No: Matrix Is NOT Palindrome");
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}
