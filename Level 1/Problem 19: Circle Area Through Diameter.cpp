//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

float EnterInfo()
{
	float Diameter = 0;

	cout << "Enter The Diameter: ";
	cin >> Diameter;

	return Diameter;
}

float CalculateCircleAreaByDiameter(float Diameter)
{
	float Area = 0;
	const float Pi = 3.141592653589793238462643383279502884197;

	Area = (Pi * pow(Diameter, 2)) / 4.0;

	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area = [" << Area << "]";
}

int main()
{
	PrintArea(CalculateCircleAreaByDiameter(EnterInfo()));

	system("pause>0");

	return 0;
}

