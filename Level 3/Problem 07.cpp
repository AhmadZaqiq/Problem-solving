//Ahmad JR
#include <iostream>
#include<iomanip>

using namespace std;

void FillMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short Counter = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Counter++;
			Matrix[i][j] = Counter;
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

void TransposeMatrix(short Matrix[3][3], short TransMatrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			TransMatrix[i][j] = Matrix[j][i];
		}
	}
}

void PrintFinalResults()
{
	short Matrix[3][3], TransMatrix[3][3];


	FillMatrix(Matrix, 3, 3);

	printf("The Following is a 3x3 Ordered Matrix:-\n");
	PrintMatrix(Matrix, 3, 3);

	TransposeMatrix(Matrix, TransMatrix, 3, 3);

	printf("\nThe Following is a 3x3 Transpose Matrix:-\n\n");
	PrintMatrix(TransMatrix, 3, 3);

}

int main()
{
	srand((unsigned)time(NULL));

	PrintFinalResults();

	system("pause>0");

	return 0;
}

