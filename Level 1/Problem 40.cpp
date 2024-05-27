//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

float Readinfo(string Message)
{
	float Number = 0;

	do {
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

float BillAfterAddServiceFee(float BillValue)
{
	return BillValue + (BillValue * 0.1);
}

float SalesTax(float BillValue)
{
	return BillValue * 0.16;
}

float TotalBill(float BillValueAfterAddServiceFee, float SalesTax)
{
	return BillValueAfterAddServiceFee + SalesTax;
}

int main()
{
	float BillValue = Readinfo("Enter The Bill Value: ");
	float BillValueAfterAddServiceFee = BillAfterAddServiceFee(BillValue);
	float Sales_Tax = SalesTax(BillValueAfterAddServiceFee);

	cout << "Total Bill Before Adding Tax...: " << BillValue << endl;
	cout << "Bill Value After Add Service Fee: " << BillValueAfterAddServiceFee << endl;
	cout << "Sales Tax: " << Sales_Tax << endl;
	cout << "***************************" << "\n\n";
	cout << "TotalBill: " << TotalBill(BillValueAfterAddServiceFee, Sales_Tax) << "\n";

	system("pause>0");

	return 0;
}

