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

	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeNotprime::NotPrime;
	}
	return enPrimeNotprime::Prime;
}

void PrintResult(int Number)
{
	cout << "\n";
	cout << "Prime Number From 1 To " << Number;
	cout << " Are:-" << endl;

	for (int i = 1; i <= Number; i++)
	{
		if (CheckIfPrimeNumber(i) == enPrimeNotprime::Prime)
			cout << i << endl;
	}
}

int main()
{
	PrintResult(ReadNumber("Enter [+] Number Please: "));

	system("pause>0");

	return 0;
}

