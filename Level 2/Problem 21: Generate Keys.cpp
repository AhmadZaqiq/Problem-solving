//Ahmad JR
#include <iostream>
#include<cstdlib>

using namespace std;

enum enRandom { SmallLetter = 0, CapitalLetter = 1, SpecialCharacter = 2, Digit = 3 };

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

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

char RandomInfo(enRandom Random)
{
	switch (Random)
	{
	case enRandom::SpecialCharacter:
		return char(RandomNumber(33, 47));
		break;

	case enRandom::Digit:
		return char(RandomNumber(48, 57));
		break;

	case enRandom::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;

	case enRandom::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	}
}

string GenerateWord(enRandom Random, short Length)
{
	string Word = "";

	for (int i = 0; i < Length; i++)
	{
		Word = Word + RandomInfo(Random);
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";

	Key = GenerateWord(enRandom::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enRandom::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enRandom::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enRandom::CapitalLetter, 4);

	return Key;
}

void GenerateKeys(short Keys)
{
	for (int i = 1; i <= Keys; i++)
	{
		cout << "Key [" << i << "] : " << GenerateKey() << endl;
	}
}

int main()

{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("Enter Number Of Keys: "));

	system("pause>0");

}

