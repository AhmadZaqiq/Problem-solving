//Ahmad JR
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include<iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";

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

vector <stClient> LoadClientsDataFromFile(string FileName)
{
	fstream MyFile;

	vector <stClient> vClients;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		stClient Client;

		while (getline(MyFile, Line))
		{
			vClients.push_back(ConvertLineToRecord(Line));
		}
	}
	return vClients;
}

void PrintHedar(vector <stClient> vClients)
{
	cout << "                                    Client list (" << vClients.size() << ") Client(s)\n\n";

	cout << "_______________________________________________________________________________________________\n\n";
	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "PIN Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________________________________________________\n\n";
}

void PrintClient(stClient Clients)
{
	cout << "| " << left << setw(15) << Clients.AccountNumber;
	cout << "| " << left << setw(10) << Clients.PINCode;
	cout << "| " << left << setw(40) << Clients.Name;
	cout << "| " << left << setw(12) << Clients.Phone;
	cout << "| " << left << setw(12) << Clients.AccountBalance;
}

void PrintClients(vector <stClient> vClients)
{
	for (stClient C : vClients)
	{
		PrintClient(C);
		cout << "\n";
	}
}

void PrintResults()
{
	stClient Client;
	vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);

	PrintHedar(vClients);
	PrintClients(vClients);
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}

