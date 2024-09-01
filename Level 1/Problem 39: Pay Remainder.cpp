//Ahmad JR
#include <iostream>

using namespace std;

int Readinfo(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

int CalculateReminder(int CashPaid, int TotalBill)
{
	return CashPaid - TotalBill;
}

int main()
{
	int TotalBill = Readinfo("Enter The Total Bill: ");
	int CashPaid = Readinfo("Enter The Cash Paid: ");

	cout << "***************************" << "\n\n";

	cout << "Total Bill: " << TotalBill << endl;
	cout << "Total Cash Paid: " << CashPaid << endl;

	cout << "Reminder: " << CalculateReminder(CashPaid, TotalBill) << "\n";

	cout << "***************************" << "\n\n";

	system("pause>0");

	return 0;
}
