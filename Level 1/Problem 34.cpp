//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

int ReadTotalSales()
{
	int TotalSales;

	cout << "Enter The Grade: ";
	cin >> TotalSales;

	return TotalSales;
}

float CalculateTotalComission(float TotalSales)
{
	if (TotalSales >= 1000000)
		return (TotalSales * 0.01);
	else if (TotalSales >= 500000)
		return (TotalSales * 0.02);
	else if (TotalSales >= 100000)
		return (TotalSales * 0.03);
	else if (TotalSales >= 50000)
		return (TotalSales * 0.05);
	else
		return 0;
}

int main()
{
	cout << "Commission: [" << CalculateTotalComission(ReadTotalSales()) << "]";

	system("pause>0");

	return 0;
}

