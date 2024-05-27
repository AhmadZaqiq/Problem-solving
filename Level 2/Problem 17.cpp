//Ahmad JR
#include<iostream>

using namespace std;

string ReadPassWord(string Message)
{
	string Num;

	cout << Message << "\n";
	cin >> Num;

	return Num;
}

bool GuessPassword(string Password)
{
	string Word = "";
	int Counter = 0;

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{

				Word = Word + char(i);
				Word = Word + char(j);
				Word = Word + char(k);

				Counter++;

				cout << "Trail [" << Counter << "] : " << Word << '\n';

				if (Word == Password)
				{
					cout << "\nPassWord IS :" << Word << "\n" << "Found After[" << Counter << "] Trail(s)";

					return true;
				}

				Word = "";
			}

		}

	}

	return false;
}

int main()
{
	GuessPassword(ReadPassWord("Enter The PassWord Please"));

	system("pause>0");

	return 0;
}



