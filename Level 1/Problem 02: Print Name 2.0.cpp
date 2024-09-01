//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
	string Name;

	cout << "Enter Ur Name Please : ";

	getline(cin, Name);

	return Name;
}

void PrintName(string Name)
{
	cout << "Ur Name Is " << Name;
}

int main()
{
	PrintName(ReadName());

	system("pause>0");

	return 0;
}
