//Ahmad JR
#include <iostream>

using namespace std;

float ReadNumber()
{
	float Number;

	cout << "Enter The Number:";
	cin >> Number;

	return Number;
}

float HalfOfNumber(float Number)
{
	return Number / 2;
}

void PrintHalfNumber(float Number)
{
	cout << "The Half Of Number [" << Number << "] is " << HalfOfNumber(Number);
}

int main()
{
	PrintHalfNumber(ReadNumber());

	system("pause>0");

	return 0;
}
