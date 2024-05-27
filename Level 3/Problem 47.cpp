//Ahmad JR
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

const string ClientFileName = "Clients.txt";

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
	getline(cin >> ws, Client.AccountNumber);
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

void SaveClientToFile(string FileName, string ClientLine)
{
	fstream MyClientsFile;

	MyClientsFile.open(FileName, ios::out | ios::app);

	if (MyClientsFile.is_open())
	{
		MyClientsFile << ClientLine;

		MyClientsFile << endl;

		MyClientsFile.close();
	}
}

void AddNewClient()
{
	stClient Client;

	Client = ReadNewClient();

	SaveClientToFile(ClientFileName, ConvertRecordToLine(Client, "#//#"));
}

void AddClient()
{
	char AddNew = 'Y';

	do
	{
		AddNewClient();

		cout << "Client Added Successfully, Do You Want To Add More Client [Y/y] ? ";
		cin >> AddNew;

	} while (toupper(AddNew) == 'Y');
}

void PrintResults()
{
	AddClient();
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}

