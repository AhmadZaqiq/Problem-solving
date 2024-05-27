//Ahmad JR
#include <iostream>
#include <cstdlib>

using namespace std;

enum enRandom { SmallLetter = 0, CapitalLetter = 1, SpecialCharacter = 2, Digit = 3 };

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

int main()
{
	srand((unsigned)time(NULL));

	cout << RandomInfo(enRandom::SmallLetter) << endl;
	cout << RandomInfo(enRandom::CapitalLetter) << endl;
	cout << RandomInfo(enRandom::SpecialCharacter) << endl;
	cout << RandomInfo(enRandom::Digit) << endl;

	system("pause>0");

	return 0;
}
