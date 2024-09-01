//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

float EnterInfo()
{
	float Circumference;

	cout << "Enter The Circumference : ";
	cin >> Circumference;

	return Circumference;
}

float CalculateCircleAreaAlongCircumference(float Circumference)
{
	float Area;
	const float Pi = 3.141592653589793238462643383279502884197;

	Area = (pow(Circumference, 2) / (Pi * 4.0));

	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area = [" << Area << "]";
}

int main()
{
	PrintArea(CalculateCircleAreaAlongCircumference(EnterInfo()));

	system("pause>0");

	return 0;
}



