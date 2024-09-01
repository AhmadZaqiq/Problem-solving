//Ahmad JR
#include <iostream>

using namespace std;

void ReadNumbers(float Nums[3])
{

	cout << "Enter The First Number:";
	cin >> Nums[0];
	cout << "Enter The Second Number:";
	cin >> Nums[1];
	cout << "Enter The Third Number:";
	cin >> Nums[2];
}

float SumOfThreeNumbers(float Nums[3])
{
	return float(Nums[0] + Nums[1] + Nums[2]);
}

float AvgOfThreeNumbers(float Nums[3])
{
	return float(SumOfThreeNumbers(Nums) / 3);
}

void PrintSum(float Sum)
{
	cout << "The Sum = " << Sum << "\n";
}

void PrintAvg(float Avg)
{
	cout << "The Avg = " << Avg << "\n";
}

int main()
{
	float Nums[3];

	ReadNumbers(Nums);
	PrintSum(SumOfThreeNumbers(Nums));
	PrintAvg(AvgOfThreeNumbers(Nums));

	system("pause>0");

	return 0;
}
