//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeNotprime { Prime = 0, NotPrime = 1 };

int ReadNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

enPrimeNotprime CheckIfPrimeNumber(int Number)
{
	int M = sqrt(Number);

	if (Number <= 1)
		return enPrimeNotprime::NotPrime;

	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeNotprime::NotPrime;
	}
	return enPrimeNotprime::Prime;
}

void PrintResult(int Number)
{
	switch (CheckIfPrimeNumber(Number))
	{
	case enPrimeNotprime::NotPrime:
		cout << "The Number Is Not Prime...";
		break;

	case enPrimeNotprime::Prime:
		cout << "The Number Is Prime...";
		break;
	}
}

int main()
{
	PrintResult(ReadNumber("Enter [+] Number Please: "));

	system("pause>0");

	return 0;
}

