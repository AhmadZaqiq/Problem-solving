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

string UpperFirstLetterOfEachWord(string S1)
{
	bool IsFirstLetter = true;

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			S1[i] = toupper(S1[i]);
		}
		IsFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}

int main()
{
	string S1 = UpperFirstLetterOfEachWord(ReadString("Please Enter Ur String: "));

	cout << "String After Convesion: " << S1;

	system("pause>0");

	return 0;
}