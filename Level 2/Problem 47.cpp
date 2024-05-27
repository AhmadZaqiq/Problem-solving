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

int MyRound(float Number)
{
	int intpart = int(Number);
	float FractionPart = GetFraction(Number);

	if (abs(FractionPart) >= 0.5)
	{
		if (Number > 0)
			return ++intpart;
		else
			return --intpart;
	}

	else
		return intpart;
}

void PrintResults()
{
	float Result = ReadNumber("Please Enter The Number: ");

	cout << "My Round Result : " << MyRound(Result) << "\n";
	cout << "C++ Round Result : " << round(Result) << "\n";
}

int main()

{
	PrintResults();

	system("pause>0");
}

