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

void PrintFirstLetterOfEachWord(string S1)
{
	bool IsFirstLetter = true;

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			cout << S1[i] << endl;
		}
		IsFirstLetter = (S1[i] == ' ' ? true : false);
	}
}

int main()
{
	printf("First Letter Of The String is:\n\n");

	PrintFirstLetterOfEachWord(ReadString("Please Enter Ur String: "));

	system("pause>0");

	return 0;
}



