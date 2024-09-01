//Ahmad JR
#include <iostream>

using namespace std;

void ReadNumbers(int Nums[3])
{
	cout << "Enter The First Number:";
	cin >> Nums[0];
	cout << "Enter The Second Number:";
	cin >> Nums[1];
	cout << "Enter The Third Number:";
	cin >> Nums[2];
}

int SumOfTHreeNumbers(int Nums[3])
{
	return Nums[0] + Nums[1] + Nums[2];
}

void PrintSum(int Sum)
{
	cout << "The Sum = " << Sum;
}

int main()
{
	int Nums[3];

	ReadNumbers(Nums);
	PrintSum(SumOfTHreeNumbers(Nums));

	system("pause>0");

	return 0;
}
