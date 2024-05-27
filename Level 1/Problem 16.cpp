//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

void EnterInfo(float& Diagonal, float& Length)
{
	cout << "Important Note* :Diagonal Must Be > Length...\n\n";

	cout << "Enter The Side Length: ";
	cin >> Length;
	cout << "Enter The Diagonal: ";
	cin >> Diagonal;
}

float CalculateRectangleAreaBySideAndDiagonal(float Diagonal, float Length)
{
	float Area;

	Area = Length * sqrt(pow(Diagonal, 2) - pow(Length, 2));

	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area = [" << Area << "]";
}

int main()
{
	float Diagonal, Length;

	EnterInfo(Diagonal, Length);
	PrintArea(CalculateRectangleAreaBySideAndDiagonal(Diagonal, Length));

	system("pause>0");

	return 0;
}
