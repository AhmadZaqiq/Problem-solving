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

short NumberOfWordsInString(string S1)
{
	string delim = " ";
	string Sword;
	short pos = 0, Counter = 0;

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		Sword = S1.substr(0, pos);

		if (Sword != "")
		{
			Counter++;
		}
		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		Counter++;
	}
	return Counter;
}

void PrintResults()
{
	string S1 = ReadString("Please Enter A String: ");

	cout << "Number Of Words In Ur String: " << NumberOfWordsInString(S1);
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}



