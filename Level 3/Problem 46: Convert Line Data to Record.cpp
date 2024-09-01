//Ahmad JR
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct stClient
{
	string AccountNumber = "", Name = "", Phone = "", PINCode = "";
	long double AccountBalance = 0;
};

vector <string> SplitString(string S1, string delim)
{
	vector <string> vString;

	short pos = 0;
	string Sword;

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		Sword = S1.substr(0, pos);

		if (Sword != "")
		{
			vString.push_back(Sword);
		}
		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

stClient ConvertLineToRecord(string Line)
{
	stClient Client;
	vector <string> vClientData = SplitString(Line, "#//#");

	Client.AccountNumber = vClientData[0];
	Client.PINCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);

	return Client;
}

void PrintClientRecord(stClient Client)
{
	cout << "Account Number         : " << Client.AccountNumber << "\n";
	cout << "PIN Code               : " << Client.PINCode << "\n";
	cout << "Name                   : " << Client.Name << "\n";
	cout << "Phone                  : " << Client.Phone << "\n";
	cout << "AccountBalance         : " << Client.AccountBalance << "\n";
}

void PrintResults()
{
	string Line = "A150#//#1234#//#Ahmad Awad#//#0594484756#//#950000.000000";

	cout << "Line Record Is       :" << Line << "\n\n";

	cout << "The Follwing Is Extracted Client record:-\n\n";

	stClient Client = ConvertLineToRecord(Line);

	PrintClientRecord(Client);
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}
