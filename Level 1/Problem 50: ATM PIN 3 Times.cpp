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
	int Counter = 3;

	do {
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
			return 1;

		else
		{
			cout << "\nWorng Pin...U Have " << Counter << " More Tries\n";
			system("color 4F");
		}

	} while (Counter >= 1 && PinCode != "1234");
	return 0;
}

int main()
{
	if (login())
	{
		system("color 2F");
		cout << "\nUr Account Balane is: 7500\n";
	}
	else
	{
		system("color 4F");
		cout << "\nUr Account Is Locked :(\n";

	}

	return 0;
}


