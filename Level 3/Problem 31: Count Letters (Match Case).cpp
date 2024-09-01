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

short CountChracterInString(string S1, char C1, bool MatchCase = true)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (C1 == S1[i])
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(C1)) //can be toupper
			{
				Counter++;
			}
		}
	}
	return Counter;
}

void PrintResults()
{
	string S1 = ReadString("Please Enter A String: ");
	char C1 = ReadCharacter("Please Enter A Character: ");

	cout << "Letter '" << C1 << "' Count [" << CountChracterInString(S1, C1) << "]\n";
	cout << "Letter '" << C1 << "' Or '";
	cout << InvertCharacter(C1) << "' Count[" << CountChracterInString(S1, C1, false) << "]\n";
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}
