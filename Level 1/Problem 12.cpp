//Ahmad JR
#include <iostream>
using namespace std;

void RedaNumbers(int& A, int& B)
{
	cout << "Enter The Two Numbers: " << endl;
	cin >> A >> B;
}

int MaxNumber(int A, int B)
{
	int Max;
	if (A > B)
		Max = A;

	else
		Max = B;

	return Max;
}

void PrintMaxNumber(int Max)

{
	cout << "Max Number =" << Max;
}

int main()
{
	int A, B;

	RedaNumbers(A, B);
	PrintMaxNumber(MaxNumber(A, B));

	return 0;

	system("pause>0");
}
