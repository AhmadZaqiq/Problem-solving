//Ahmad JR
#include <iostream>

using namespace std;

char ReadCharacter(string Message)
{
	char Char = ' ';

	cout << Message;
	cin >> Char;

	return Char;
}

bool IsVowel(char C1)
{
	C1 = tolower(C1);

	return (C1 == 'a' || C1 == 'e' || C1 == 'o' || C1 == 'i' || C1 == 'u');
}

void PrintResults()
{
	char C1 = ReadCharacter("Please Enter A Character: ");

	if (IsVowel(C1))
		cout << "Yes Letter '" << C1 << "' Is Vowel";
	else
		cout << "No Letter '" << C1 << "' Is NOT Vowel";
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}
