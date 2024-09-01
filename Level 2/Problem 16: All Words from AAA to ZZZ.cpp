//Ahmad JR
#include<iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << "\n";
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

void PrintAllWordsFromAAAToZZZ()
{
	string Word = "";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{

				Word = Word + char(i);
				Word = Word + char(j);
				Word = Word + char(k);

				cout << Word << endl;

				Word = "";
			}

		}

	}
}

int main()
{
	PrintAllWordsFromAAAToZZZ();

	system("pause>0");

	return 0;
}


