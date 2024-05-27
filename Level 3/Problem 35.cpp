//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

string ReadString(string Message)
{
	string String = "";

	cout << Message;
	getline(cin, String);

	return String;
}

void PrintEachWordInString(string S1)
{
	string delim = " ";
	short pos = 0;
	string Sword;

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		Sword = S1.substr(0, pos);

		if (Sword != "")
		{
			cout << Sword << endl;
		}
		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		cout << S1 << endl;
	}
}

void PrintResults()
{
	string S1 = ReadString("Please Enter A String: ");

	cout << "Each Word In String:- \n";

	PrintEachWordInString(S1);
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}


