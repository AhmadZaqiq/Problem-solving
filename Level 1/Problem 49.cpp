//Ahmad JR
#include <iostream>

using namespace std;

string ReadPinCode()
{
	string PinCode;

	cout << "Pleas Enter PIN Code:" << "\n";
	cin >> PinCode;

	return PinCode;
}

bool login()
{
	string PinCode;

	do {
		PinCode = ReadPinCode();

		if (PinCode == "1234")
			return 1;

		else
		{
			cout << "\nWorng Pin\n";
			system("color 4F");
		}

	} while (PinCode != "1234");

}

int main()
{
	if (login())
	{
		system("color 2F");
		cout << "\nUr Account Balane is: 7500\n";
	}

	system("pause>0");

	return 0;
}

