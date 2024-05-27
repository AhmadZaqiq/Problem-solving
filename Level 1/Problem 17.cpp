//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

void EnterInfo(float& Base, float& height)
{
	cout << "Enter The height: ";
	cin >> height;
	cout << "Enter The Base Length: ";
	cin >> Base;
}

float CalculateTriangleArea(float Base, float height)
{
	float Area = 0;

	Area = (1 / 2.0) * Base * height;

	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area = [" << Area << "]";
}

int main()
{
	float Base, height;

	EnterInfo(Base, height);
	PrintArea(CalculateTriangleArea(Base, height));

	system("pause>0");

	return 0;
}
