//Ahmad JR
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
		S1[i] = tolower(S1[i]);

	return S1;
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

string JoinString(vector <string> vString, string Delim)
{
	string S1 = "";

	for (string& Word : vString)
	{
		S1 = S1 + Word + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

string ReplaceWordInStringUsingSplit(string S1, string Replacementword, string WordToBeReplaced, bool MatchCase = true)
{
	vector <string> vString = SplitString(S1, " ");

	for (string& Word : vString)
	{
		if (MatchCase)
		{
			if (Word == Replacementword)
				Word = WordToBeReplaced;
		}

		else
		{
			if (LowerAllString(Word) == LowerAllString(Replacementword))
				Word = WordToBeReplaced;
		}
	}
	return JoinString(vString, " ");
}

void PrintResults()
{
	string S1 = "Welcome To Jordan , Jordan Is A Nice Country", Replacementword = "jordan", WordToBeReplaced = "USA";

	cout << "Original String             : " << S1 << "\n";
	cout << "Replace With Match Case     : " << ReplaceWordInStringUsingSplit(S1, Replacementword, WordToBeReplaced) << "\n";
	cout << "Replace Without Match Case  : " << ReplaceWordInStringUsingSplit(S1, Replacementword, WordToBeReplaced, false) << "\n";
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}
