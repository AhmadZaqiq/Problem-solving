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

void FillMatrixWithRandomNumbers(short Matrix[3][3], short rows, short columns)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < columns; j++)
		{
			Matrix[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(short Matrix[3][3], short rows, short columns)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < columns; j++)
		{
			cout << setw(3) << Matrix[i][j] << "\t";
		}
		cout << "\n";
	}
}

short SumOfeachRow(short Matrix[3][3], short rows, short columns)
{
	short Sum = 0;

	for (short j = 0; j < columns; j++)
	{
		Sum += Matrix[rows][j];
	}
	return Sum;
}

void SumMatrixRowsInArray(short Matrix[3][3], short SumArr[3], short rows, short columns)
{
	for (short i = 0; i < rows; i++)
	{
		SumArr[i] = SumOfeachRow(Matrix, i, columns);
	}
}

void PrintSumOfEachRow(short Matrix[3][3], short SumArr[3], short rows, short columns)
{
	for (short i = 0; i < rows; i++)
	{
		cout << " Row " << i + 1 << " Sum = " << SumArr[i] << "\n";
	}
}

void PrintFinalResults()
{
	short Matrix[3][3];
	short ArrSum[3];

	printf("The Follwing is 3x3 Matrix:- \n");

	FillMatrixWithRandomNumbers(Matrix, 3, 3);
	PrintMatrix(Matrix, 3, 3);

	SumMatrixRowsInArray(Matrix, ArrSum, 3, 3);

	printf("\nThe Following Are The Sum Of Each Row in The Matrix:- \n\n");

	PrintSumOfEachRow(Matrix, ArrSum, 3, 3);
}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}