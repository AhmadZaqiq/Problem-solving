//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Enter Ther Number:";
	cin >> Number;

	return Number;
}

int Powerof2(int Num)
{
	return pow(Num, 2);
}

int Powerof3(int Num)
{
	return pow(Num, 3);
}

int Powerof4(int Num)
{
	return pow(Num, 4);
}

void PrintValues(int Num)
{
	int A = Powerof2(Num), B = Powerof3(Num), C = Powerof4(Num);

	cout << Num << "^2 = " << A << "\n";
	cout << Num << "^3 = " << B << "\n";
	cout << Num << "^4 = " << C << "\n";

}

int main()
{
	PrintValues(ReadNumber());

	system("pause>0");

	return 0;
}
