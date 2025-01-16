//Ahmad JR
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int ReadNumber(int Index = 1, string Message = "Please Enter Number ")
{
	int Number = 0;
	do
	{
		cout << Message << "[" << Index << "] : ";
		cin >> Number;
	} while (Number < 1);

	return Number;
}

vector <int> FillVector(int VectorSize)
{
	vector <int> vNumbers;

	for (int i = 0; i < VectorSize; i++)
	{
		vNumbers.push_back(ReadNumber(i + 1));
	}

	return vNumbers;
}

void PrintVector(vector <int>& vNumbers)
{
	cout << "[ ";

	for (int i = 0; i < vNumbers.size(); i++)
	{
		cout << vNumbers[i] << " ";
	}

	cout << "]\n";
}

bool CheckOddNumber(int Number)
{
	return (Number % 2 != 0);
}

vector <int> VectorOfOddNumbers(vector <int>& vNumbers)
{
	vector <int> vOddNumbers;

	for (int i = 0; i < vNumbers.size(); i++)
	{
		if (CheckOddNumber(vNumbers[i]))
		{
			vOddNumbers.push_back(vNumbers[i]);
		}
	}

	return vOddNumbers;
}

bool CheckIfElementExistInVector(int Number, vector <int>& vNumbers)
{
	for (int i = 0; i < vNumbers.size(); i++)
	{
		if (vNumbers[i] == Number)
		{
			return true;
		}
	}

	return false;
}

vector <int> CopyDistinctVector(vector <int>& vNumbers)
{
	vector <int> vDistinct;

	for (int i = 0; i < vNumbers.size(); i++)
	{
		if (!CheckIfElementExistInVector(vNumbers[i], vDistinct))
		{
			vDistinct.push_back(vNumbers[i]);
		}
	}

	return vDistinct;
}

vector <int> CountOfRepeatedNumbers(vector <int>& vDistinct, vector <int>& vNumbers)
{
	vector <int> vCounters;

	for (int i = 0; i < vDistinct.size(); i++)
	{
		int Counter = 0;

		for (int j = 0; j < vNumbers.size(); j++)
		{
			if (vDistinct[i] == vNumbers[j])
			{
				Counter++;
			}
		}
		vCounters.push_back(Counter);
	}
	return vCounters;
}

void PrintCountOfRepeatedNumbers(vector <int>& vDistinct, vector <int>& vCounters)
{
	cout << "\n[2] -> {";

	for (int i = 0; i < vDistinct.size(); i++)
	{
		if (i == vDistinct.size() - 1)
		{
			cout << vDistinct[vDistinct.size() - 1] << ": " << vCounters[vDistinct.size() - 1] << "}";
		}
		else
		{
			cout << vDistinct[i] << ": " << vCounters[i] << ", ";
		}
	}
}

bool compare(string A, string B)
{
	return A + B > B + A;
}

vector<string> ConvertVectorToStringVector(vector <int>& vNumbers)
{
	vector<string> vStringNumbers;

	for (int i = 0; i < vNumbers.size(); i++)
	{
		vStringNumbers.push_back(to_string(vNumbers[i]));
	}

	return vStringNumbers;
}

int ConvertStringVectorToNumber(vector <string>& vStringNumbers)
{
	string Result = "";

	for (int i = 0; i < vStringNumbers.size(); i++)
	{
		Result += vStringNumbers[i];
	}
	return stoi(Result);
}

int LargestNumberFormedFromAllOddNumbers(vector <int>& vNumbers)
{
	vector<string> vStringNumbers = ConvertVectorToStringVector(vNumbers);

	sort(vStringNumbers.begin(), vStringNumbers.end(), compare); //ترتيب الارقام بناء على المقارنة

	return ConvertStringVectorToNumber(vStringNumbers);
}

void DisplayResult(vector <int> vOddNumbers)
{
	cout << "\n[1] -> ";

	PrintVector(vOddNumbers);

	vector <int> vDistinctOddNumbers = CopyDistinctVector(vOddNumbers);

	vector <int> vCounters = CountOfRepeatedNumbers(vDistinctOddNumbers, vOddNumbers);

	PrintCountOfRepeatedNumbers(vDistinctOddNumbers, vCounters);

	cout << "\n\n[3] -> " << LargestNumberFormedFromAllOddNumbers(vOddNumbers);
}

int main()
{
	int VectorLength = ReadNumber(1, "Please Enter Vector Length ");

	vector <int> vNumbers = FillVector(VectorLength);

	vector <int> vOddNumbers = VectorOfOddNumbers(vNumbers);

	cout << "\nVector: ";

	PrintVector(vNumbers);

	if (vOddNumbers.size() != 0)
	{
		DisplayResult(vOddNumbers);
	}

	else
	{
		cout << "\nNo Odd Numbers... ";
	}

	system("pause>0");
}
