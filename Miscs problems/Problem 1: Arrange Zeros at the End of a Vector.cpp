#include <iostream>
#include <vector>

using namespace std;

int ReadNumber(string Messgae, short i = 0)
{
	int Number = 0;

	cout << Messgae << i + 1 << ": ";
	cin >> Number;

	return Number;
}

vector <int> FillVector(int VectorSize)
{
	vector <int> vNumbers;

	for (int i = 0; i < VectorSize; i++)
	{
		vNumbers.push_back(ReadNumber("Please Enter Number ", i));
	}

	return vNumbers;
}

void PrintVector(vector <int>& vNumbers)
{
	cout << "\n";

	for (int n : vNumbers)
	{
		cout << n << " ";
	}

	cout << "\n";
}

vector <int> AddZerosAtEndOfTheVector(vector <int>& vNumbers, int Counter)
{
	for (int i = 0; i < Counter; i++)
	{
		vNumbers.push_back(0);
	}

	return vNumbers;
}

void ArrangeZerosAtTheEndOfTheVector(vector <int>& vNumbers)
{
	int Counter = 0;
	vector <int> vtemp;

	for (int n : vNumbers)
	{
		if (n == 0)
		{
			continue; 
		}
		vtemp.push_back(n);
		Counter++;
	}

	vNumbers = AddZerosAtEndOfTheVector(vtemp, Counter);
}

int main()
{
	int Size = ReadNumber("Pls Enter Size of the Vector ");

	vector <int> vNumbers = FillVector(Size);

	PrintVector(vNumbers);

	ArrangeZerosAtTheEndOfTheVector(vNumbers);

	PrintVector(vNumbers);

	system("pause>0");
}
