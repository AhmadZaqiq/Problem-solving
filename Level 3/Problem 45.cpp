//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

struct stClient
{
	string AccountNumber = "", Name = "", Phone = "", PINCode = "";
	long double AccountBalance = 0;
};

stClient ReadNewClient()
{
	stClient Client;

	cout << "please Enter Client Data     :-\n\n";

	cout << "Enter Account Number         : ";
	getline(cin, Client.AccountNumber);
	cout << "Enter PIN Code               : ";
	getline(cin, Client.PINCode);
	cout << "Enter Name                   : ";
	getline(cin, Client.Name);
	cout << "Enter Phone                  : ";
	getline(cin, Client.Phone);
	cout << "Enter AccountBalance         : ";
	cin >> Client.AccountBalance;

	return Client;
}

string ConvertRecordToLine(stClient Client, string delim)
{
	string StringClientData = "";

	StringClientData = StringClientData + Client.AccountNumber + delim;
	StringClientData = StringClientData + Client.PINCode + delim;
	StringClientData = StringClientData + Client.Name + delim;
	StringClientData = StringClientData + Client.Phone + delim;
	StringClientData = StringClientData + to_string(Client.AccountBalance);

	return StringClientData;
}

void PrintResults()
{
	stClient Client = ReadNewClient();

	cout << "Client Record For Saving Is:\n" << ConvertRecordToLine(Client, "#//#");
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}