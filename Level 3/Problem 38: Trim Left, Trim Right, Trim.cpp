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

string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
			return S1.substr(i, S1.length() - i);
	}
	return "";
}

string TrimRight(string S1)
{
	for (short i = S1.length(); i > 0; i--)
	{
		if (S1[i] != ' ')
			return S1.substr(0, i + 1);
	}
	return "";
}

string Trim(string S1)
{
	return	TrimLeft(TrimRight(S1));
}

void PrintResults()
{
	string S1 = ReadString("Please Enter A String  :");

	cout << "The String     :" << S1 << "\n";
	cout << "Trim Left      :" << TrimLeft(S1) << "\n";
	cout << "Trim Right     :" << TrimRight(S1) << "\n";
	cout << "Trim           :" << Trim(S1) << "\n";
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}
