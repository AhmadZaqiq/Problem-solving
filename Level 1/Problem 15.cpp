//Ahmad JR
#include <iostream>

using namespace std;

void ReadNumber(float& Length, float& Width)
{
	cout << "Enter The Length:";
	cin >> Length;
	cout << "Enter The Width: ";
	cin >> Width;
}

float RectangleArea(float Length, float Width)
{
	float Area = Length * Width;

	return Area;
}

void PrintRectangleArea(float Area)
{
	cout << "Rectangle Area: " << Area;
}

int main()
{
	float Length, Width;

	ReadNumber(Length, Width);
	PrintRectangleArea(RectangleArea(Length, Width));

	system("pause>0");

	return 0;
}
