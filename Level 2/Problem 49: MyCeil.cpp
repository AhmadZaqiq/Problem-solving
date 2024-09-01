//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

float GetFraction(float Number)
{
	return Number - int(Number);
}

int MyCeil(float Number)
{
	int intpart = int(Number);
	float FractionPart = GetFraction(Number);

	if (abs(FractionPart) > 0)
	{
		if (Number > 0)
			return ++intpart;
		else
			return intpart;
	}

	else
		return intpart;
}

void PrintResults()
{
	float Result = ReadNumber("Please Enter The Number: ");

	cout << "My Ceil  Result : " << MyCeil(Result) << "\n";
	cout << "C++ Ceil  Result : " << ceil(Result) << "\n";
}

int main()
{
	PrintResults();

	system("pause>0");
}


