//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;

	do {
		cout << Message;
		cin >> Number;

	} while (Number < 0);
	return Number;
}

float MySqrt(float Number)
{
	return pow(Number, 0.5);
}

void PrintResults()
{
	float Result = ReadNumber("Please Enter The Number: ");

	cout << "My Sqrt  Result : " << MySqrt(Result) << "\n";
	cout << "C++ Sqrt  Result : " << sqrt(Result) << "\n";
}

int main()
{
	PrintResults();

	system("pause>0");
}


