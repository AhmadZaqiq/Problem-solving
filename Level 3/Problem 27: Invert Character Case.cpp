//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

char ReadCharacter(string Message)
{
	char Char = ' ';

	cout << Message;
	cin >> Char;

	return Char;
}

char InvertCharacter(char C1)
{
	return (isupper(C1) ? tolower(C1) : toupper(C1));
}

int main()
{
	char C1 = ReadCharacter("Please Enter A Character: ");

	cout << "Char After Inverting Case: " << InvertCharacter(C1);

	system("pause>0");

	return 0;
}


