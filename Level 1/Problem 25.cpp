//Ahmad JR
#include <iostream>

using namespace std;

int ReadAge()
{
	int Age;

	cout << "Enter The Age:";
	cin >> Age;

	return Age;
}

bool ChechValidateNumberInRange(int Age, int From, int To)
{
	return (Age >= From && Age <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;

	do
	{
		Age = ReadAge();

	} while (!ChechValidateNumberInRange(Age, From, To));

	return Age;
}

void PrintIfValidOrNot(int Age)
{
	if (ChechValidateNumberInRange(Age, 18, 60))
		cout << "Age is Valid";
}

int main()
{
	PrintIfValidOrNot(ReadUntilAgeBetween(18, 60));

	system("pause>0");

	return 0;
}
