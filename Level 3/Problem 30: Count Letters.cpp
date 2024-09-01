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

char ReadCharacter(string Message)
{
	char Char = ' ';

	cout << Message;
	cin >> Char;

	return Char;
}

char InvertCharacter(char C1)
{
	return (isupper(C1) ? tolower(C1) : toupper(C1));
}

short CountChracterInStrint(string S1, char C1)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (C1 == S1[i])
			Counter++;
	}

	return Counter;
}

void PrintResults()
{
	string S1 = ReadString("Please Enter A String: ");
	char C1 = ReadCharacter("Please Enter A Character: ");

	cout << "Letter '" << C1 << "' Count [" << CountChracterInStrint(S1, C1) << "]\n";
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}
