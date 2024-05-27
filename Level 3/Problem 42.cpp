//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

string ReplaceWordInString(string S1, string Replacementword, string  WordToBeReplaced)
{
	short pos = S1.find(Replacementword);

	while (pos != string::npos)
	{
		S1 = S1.replace(pos, Replacementword.length(), WordToBeReplaced);
		pos = S1.find(Replacementword);
	}
	return S1;
}

void PrintResults()
{
	string S1 = "Welcome To Jordan, Jordan Is A Nice Country", Replacementword = "Jordan", WordToBeReplaced = "USA";

	cout << "Original String      : " << S1 << "\n";
	cout << "String After Replace : " << ReplaceWordInString(S1, Replacementword, WordToBeReplaced) << "\n";
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}