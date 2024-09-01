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

short CapitalLettersCount(string S1)
{
	short CapitalCount = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
			CapitalCount++;
	}
	return CapitalCount;
}

short SmallLettersCount(string S1)
{
	short SmallCount = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (islower(S1[i]))
			SmallCount++;
	}
	return SmallCount;
}

void PrintResults()
{
	string S1 = ReadString("Please Enter A String: ");
	short CapitalCount = CapitalLettersCount(S1);
	short SmallCount = SmallLettersCount(S1);

	cout << "String Length: " << S1.length() << "\n";
	cout << "Capital Letters Count: " << CapitalCount << "\n";
	cout << "Small Letters Count " << SmallCount << "\n";
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}


