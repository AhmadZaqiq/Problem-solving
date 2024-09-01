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
			Matrix[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(short Matrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << setw(3) << Matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

short SumOfeachCol(short Matrix[3][3], short Rows, short Columns)
{
	short Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		Sum += Matrix[i][Columns];
	}
	return Sum;
}

void  FillSumOfEachColInArr(short Matrix[3][3], short ArrSum[3], short Rows)
{
	for (short j = 0; j < Rows; j++)
	{
		ArrSum[j] = SumOfeachCol(Matrix, Rows, j);
	}
}

void PrintSumOfeachCol(short Matrix[3][3], short ArrSum[3], short Rows, short Columns)
{
	for (short j = 0; j < Columns; j++)
	{
		cout << "Col " << j + 1 << " Sum = " << ArrSum[j] << "\n";
	}
}

void PrintFinalResults()
{
	short Matrix[3][3];
	short ArrSum[3];

	printf("The Follwing is 3x3 Matrix:- \n");

	FillMatrix(Matrix, 3, 3);
	PrintMatrix(Matrix, 3, 3);

	FillSumOfEachColInArr(Matrix, ArrSum, 3);

	printf("The Following Are The Sum Of Each Col In The Matrix:- \n\n");

	PrintSumOfeachCol(Matrix, ArrSum, 3, 3);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}

