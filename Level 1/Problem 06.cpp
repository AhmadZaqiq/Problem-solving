//Ahmad JR
#include <iostream>

using namespace std;

struct stName
{
	string FirstName, LastName;
};

stName ReadName()
{
	stName Name;

	cout << "Enter Ur First Name:";
	cin >> Name.FirstName;
	cout << "Enter Ur Last Name:";
	cin >> Name.LastName;

	return Name;
}

string MergeNames(stName Name)
{
	string FullName = Name.FirstName + " " + Name.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{
	cout << "Ur Name Is " << FullName;
}

int main()
{
	PrintFullName(MergeNames(ReadName()));

	system("pause>0");

	return 0;
}
