//Ahmad JR
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string JoinString(vector <string> vString, string Delim)
{
	string S1 = "";

	for (string& Word : vString)
	{
		S1 = S1 + Word + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

string JoinString(string Arr[4], short ArrLength, string Delim)
{
	string S1 = "";

	for (short i = 0; i < ArrLength; i++)
	{
		S1 = S1 + Arr[i] + Delim;
	}
	return (S1.substr(0, S1.length() - Delim.length()));
}

void PrintResults()
{
	vector <string> vString = { "Ahmad","Yousef","Khalil","Awad" };

	string Arr[] = { "Ahmad","Yousef","Khalil","Awad" };

	cout << "Vector After join   :" << JoinString(vString, ",") << "\n\n";

	cout << "Array After join    :" << JoinString(Arr, 4, ",") << "\n\n";
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}


