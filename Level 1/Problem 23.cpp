//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

void EnterInfo(float& A, float& B, float& C)
{
	cout << "Enter The Fisrt Length : ";
	cin >> A;
	cout << "Enter The Second Length : ";
	cin >> B;
	cout << "Enter The Third Length : ";
	cin >> C;
}

float CalculateCircleAreaDescibedAroundAnArbitraryTrinangle(float A, float B, float C)
{
	float Area;
	float P = (A + B + C) / 2;
	const float Pi = 3.141592653589793238462643383279502884197;

	Area = Pi * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);

	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area = [" << Area << "]";
}

int main()
{
	float A = 0, B = 0, C = 0;

	EnterInfo(A, B, C);

	PrintArea(CalculateCircleAreaDescibedAroundAnArbitraryTrinangle(A, B, C));

	system("pause>0");

	return 0;
}




