//Ahmad JR
#include <iostream>

using namespace std;

float ReadInfo(string Message)
{
	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

float CalculateMonths(float LoanAmont, float Monthlypayment)
{
	return float(LoanAmont / Monthlypayment);
}

int main()
{
	float LoanAmont, Monthlypayment;

	LoanAmont = ReadInfo("Enter The Loan Amont: ");
	Monthlypayment = ReadInfo("Enter The Monthly payment: ");

	cout << "Number Of Months= [" << CalculateMonths(LoanAmont, Monthlypayment) << "] Months \n";

	system("pause>0");

	return 0;
}
