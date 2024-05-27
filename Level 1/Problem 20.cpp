//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

float EnterInfo()
{
	float Length = 0;

	cout << "Enter The Length: ";
	cin >> Length;

	return Length;
}

float CalculateCircleInscribedInSquare(float Length)
{
	float Area = 0;
	const float Pi = 3.14159265;

	Area = (Pi * pow(Length, 2)) / 4.0;

	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area = [" << Area << "]";
}

int main()
{
	PrintArea(CalculateCircleInscribedInSquare(EnterInfo()));

	system("pause>0");

	return 0;
}


