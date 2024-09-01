//Ahmad JR
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ReadString(string Message)
{
	string String = "";

	cout << Message;
	getline(cin, String);

	return String;
}

vector <string> SplitString(string S1, string delim)
{
	vector <string> vString;

	short pos = 0;
	string Sword;

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		Sword = S1.substr(0, pos);

		if (Sword != "")
		{
			vString.push_back(Sword);
		}
		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

void PrintResults()
{
	vector <string> vString;

	vString = SplitString(ReadString("Please Enter A String: "), " ");

	cout << "Tokens:" << vString.size() << "\n";

	cout << "Each Word In String:- \n";

	for (string& Words : vString)
	{
		cout << Words << "\n";
	}
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}
