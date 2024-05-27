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

bool IsVowel(char C1)
{
	C1 = tolower(C1);

	return (C1 == 'a' || C1 == 'e' || C1 == 'o' || C1 == 'i' || C1 == 'u');
}

short CountVowel(string S1)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			Counter++;
	}
	return Counter;
}

void PrintResults()
{
	string S1 = ReadString("Please Enter A String: ");

	cout << "Number OF vowels is: " << CountVowel(S1);
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}

