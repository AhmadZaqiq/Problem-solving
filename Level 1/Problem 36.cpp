//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', divide = '/' };

float ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

enOperationType ReadOperationType()
{
	char OT = '+';

	cout << "Please Enter The Operation Type [+] [-] [*] [/]...?";
	cin >> OT;

	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OPType)
{
	switch (OPType)
	{
	case enOperationType::Add:
		return Number1 + Number2;

	case enOperationType::Subtract:
		return Number1 - Number2;

	case enOperationType::Multiply:
		return Number1 * Number2;

	case enOperationType::divide:
		return Number1 / Number2;

	default:
		return Number1 + Number2;
	}
}

int main()
{
	float Number1 = ReadNumber("Please Enter The First Number: ");
	float Number2 = ReadNumber("Please Enter The Second Number: ");

	enOperationType OPType = ReadOperationType();

	cout << "The Result = " << Calculate(Number1, Number2, OPType);

	system("pause>0");

	return 0;
}


