//Ahmad JR
#include <iostream>

using namespace std;

void RedaNumbers(int& A, int& B, int& C)
{
	cout << "Enter The Three Numbers: " << endl;
	cin >> A >> B >> C;
}

int CalculateMaxNumber(int A, int B, int C)
{
	int Max;
	if (A > B)
		if (A > C)
			Max = A;
		else
			Max = C;

	else
		if (B > C)
			Max = B;
		else
			Max = C;

	return Max;
}

void PrintMaxNumber(int Max)

{
	cout << "Max Number =" << Max;
}

int main()
{
	int A, B, C;

	RedaNumbers(A, B, C);
	PrintMaxNumber(CalculateMaxNumber(A, B, C));

	system("pause>0");

	return 0;
}
