//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

string RemovePauncuations(string S1)
{
	string S2 = "";

	for (short i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
			S2 += S1[i];
	}
	return S2;
}

void PrintResults()
{
	string S1 = "Welcome To Jordan, Jordan Is A Nice Country; it's Amazing";

	cout << "Original String        : " << S1 << "\n\n";

	cout << "RemovePauncuations     : " << RemovePauncuations(S1);
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}

