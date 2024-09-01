//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

float EnterInfo()
{
	float Radius = 0;

	cout << "Enter The Radius: ";
	cin >> Radius;

	return Radius;
}

float CalculateCircleArea(float Radius)
{
	float Area = 0;
	const float Pi = 3.14;

	Area = Pi * pow(Radius, 2);

	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area = [" << Area << "]";
}

int main()
{
	PrintArea(CalculateCircleArea(EnterInfo()));

	system("pause>0");

	return 0;
}

