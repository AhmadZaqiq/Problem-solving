//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

struct stPiggy
{
	int Penny, Nickel, Dime, Quatrer, Dollar;
};

stPiggy ReadValues()
{
	stPiggy Piggy;

	cout << "Enter The Amount in Penny: ";
	cin >> Piggy.Penny;
	cout << "Enter The Amount in Nickel: ";
	cin >> Piggy.Nickel;
	cout << "Enter The Amount in Dime: ";
	cin >> Piggy.Dime;
	cout << "Enter The Amount in Quatrer: ";
	cin >> Piggy.Quatrer;
	cout << "Enter The Amount in Dollar: ";
	cin >> Piggy.Dollar;

	return Piggy;
}

int CalculationsToPennies(stPiggy Piggy)
{
	return(Piggy.Penny * 1 + Piggy.Nickel * 5 + Piggy.Dime * 10 + Piggy.Quatrer * 25 + Piggy.Dollar * 100);
}

int main()
{
	int TotalAmount = CalculationsToPennies(ReadValues());

	cout << TotalAmount << " Pennies" << "\n";
	cout << (float)TotalAmount / 100 << " Dollars";

	system("pause>0");

	return 0;
}

