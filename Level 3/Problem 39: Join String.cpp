//Ahmad JR
#include <iostream>
#include <vector>

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

void PrintResults()
{
	vector <string> vString = { "Ahmad","Yousef","Khalil","Awad" };

	cout << "Vector After join   :" << JoinString(vString, ",");
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}

