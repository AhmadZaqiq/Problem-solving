//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

void ReadNumberAndPower(int& Number, int& Power)
{
	cout << "Enter The Number:";
	cin >> Number;
	cout << "Enter The Power: ";
	cin >> Power;
}

int CalculateThePowerForNumber(int N, int M)

{
	return pow(N, M);
}

void PrintValue(int Value)
{
	cout << "The Value= " << Value;

}

int main()
{
	int Number, Power;

	ReadNumberAndPower(Number, Power);
	PrintValue(CalculateThePowerForNumber(Number, Power));

	system("pause>0");

	return 0;
}

