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

string ReverseWordInString(string S1)
{
	vector <string> vString = SplitString(S1, " ");
	string S2 = "";
	vector <string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;

		S2 += *iter + " ";
	}
	return S2.substr(0, S2.length() - 1);
}

void PrintResults()
{
	string S1 = ReadString("Please Enter A String: ");

	cout << "\nString               : " << S1 << "\n\n";

	cout << "String In Reverse    : " << ReverseWordInString(S1);
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}

