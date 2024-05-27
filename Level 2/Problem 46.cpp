//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

short ReadNumber(string Message)
{
	short Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

short MyABS(short ABSNumber)
{
	if (ABSNumber > 0)
		return ABSNumber;
	else
		return ABSNumber * -1;
}

void PrintResults()
{
	short Result = ReadNumber("Please Enter The Number: ");

	cout << "My ABS Result : " << MyABS(Result) << "\n";
	cout << "C++ ABS Result : " << abs(Result) << "\n";
}

int main()

{
	PrintResults();

	system("pause>0");
}
