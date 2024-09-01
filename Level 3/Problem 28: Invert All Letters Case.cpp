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

char InvertCharacter(char C1)
{
	return (isupper(C1) ? tolower(C1) : toupper(C1));
}

string InvertString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertCharacter(S1[i]);
	}
	return S1;
}

int main()
{
	string S1 = ReadString("Please Enter A String: ");

	cout << "String After Inverting Case: " << InvertString(S1);

	system("pause>0");

	return 0;
}



