//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

void EnterInfo(float& A, float& B)
{
	cout << "Important Note*: Fisrt Length Must be > Second Length...\n\n";

	cout << "Enter The Fisrt Length : ";
	cin >> A;
	cout << "Enter The Second Length : ";
	cin >> B;
}

float CalculateCircleAreaInscribedInAnIsoscelesTriangle(float A, float B)
{
	float Area;
	const float Pi = 3.141592653589793238462643383279502884197;

	Area = (Pi * (pow(B, 2) / 4.0) * ((2 * A - B) / (2 * A + B)));

	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area = [" << Area << "]";
}

int main()
{
	float A, B;

	EnterInfo(A, B);
	PrintArea(CalculateCircleAreaInscribedInAnIsoscelesTriangle(A, B));

	system("pause>0");

	return 0;
}




