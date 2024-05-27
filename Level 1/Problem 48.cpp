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

float CalculateMonthlypayment(float LoanAmont, float NumberOfMonths)
{
	return float(LoanAmont / NumberOfMonths);
}

int main()
{
	float LoanAmont, NumberOfMonths;

	LoanAmont = ReadInfo("Enter The Loan Amont: ");
	NumberOfMonths = ReadInfo("Enter The Number Of Monthes: ");

	cout << "Monthly payment= [" << CalculateMonthlypayment(LoanAmont, NumberOfMonths) << "$] \n";

	system("pause>0");

	return 0;
}

