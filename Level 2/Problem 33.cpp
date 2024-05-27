//Ahmad JR
#include <iostream>
#include<cstdlib>

using namespace std;

enum enRandom { SmallLetter = 0, CapitalLetter = 1, SpecialCharacter = 2, Digit = 3 };

int ReadPositiveNumber(string Massage)
{
	int Num = 0;
	do
	{
		cout << Massage;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
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

void FillArrayNumbers(string Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = GenerateKey();
	}
}

void PrintArray(string Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << "Array [" << i << "] : " << Arr[i] << "\n";
	}
}

int main()

{
	srand((unsigned)time(NULL));

	string Arr[100];
	int ArrLength;

	ArrLength = ReadPositiveNumber("How Many Keys Do U Want To Generate..? ");

	FillArrayNumbers(Arr, ArrLength);

	cout << "Keys Generated :- " << "\n";

	PrintArray(Arr, ArrLength);

	system("pause>0");
}


