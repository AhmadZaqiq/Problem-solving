//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

int CalculateSum()
{
	int Sum = 0, Counter = 1, Number = 0;

	do {

		Number = ReadNumber("Please Enter The Number " + to_string(Counter) + ": ");

		if (Number == -99)
		{
			break;
		}

		Sum += Number;
		Counter++;

	} while (Number != -99);

	return Sum;
}

int main()
{
	cout << "The Result= [" << CalculateSum() << "]";

	system("pause>0");

	return 0;
}
