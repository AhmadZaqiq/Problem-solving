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

void PrintIfValidOrNot(int Age)
{
	if (ChechValidateNumberInRange(Age, 18, 60))
		cout << "Age is Valid";

	else
		cout << "Age Is Invalid";
}

int main()
{
	PrintIfValidOrNot(ReadAge());

	system("pause>0");

	return 0;
}





