//Ahmad JR
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include<iomanip>

using namespace std;

string ReadString(string Message)
{
	string String = "";

	cout << Message;
	getline(cin, String);

	return String;
}

const string ClientsFileName = "Clients.txt";

struct stClient
{
	string AccountNumber = "", Name = "", Phone = "", PINCode = "";
	long double AccountBalance = 0;
	bool MarkForDelete = false;
};

stClient ChangeClientRecord(string UserAccountNumber)
{
	stClient Client;

	cout << "please Enter New Client Data     :-\n\n";


	Client.AccountNumber = UserAccountNumber;

	cout << "Enter PIN Code               : ";
	getline(cin >> ws, Client.PINCode);
	cout << "Enter Name                   : ";
	getline(cin, Client.Name);
	cout << "Enter Phone                  : ";
	getline(cin, Client.Phone);
	cout << "Enter AccountBalance         : ";
	cin >> Client.AccountBalance;

	return Client;
}

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

void PrintClientByAccountNumber(stClient Client)
{
	cout << "\nThe Follwing Are The Client Details:-\n\n";

	cout << "Account Number :" << Client.AccountNumber << "\n";
	cout << "PIN Code       :" << Client.PINCode << "\n";
	cout << "Client Name    :" << Client.Name << "\n";
	cout << "Phone          :" << Client.Phone << "\n";
	cout << "Balance        :" << Client.AccountBalance << "\n";
}

bool CheckIfClientAccountExist(stClient& Client, string UserAccountNumber, vector <stClient> vClients)
{
	for (stClient C : vClients)
	{
		if (UserAccountNumber == C.AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

vector <stClient> SaveClientsDataToFile(string FileName, vector <stClient> vClients)
{
	fstream MyClientsFile;

	MyClientsFile.open(FileName, ios::out);

	string DataLine;

	if (MyClientsFile.is_open())
	{
		for (stClient& C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C, "#//#");
				MyClientsFile << DataLine << endl;
			}
		}

		MyClientsFile.close();
	}
	return vClients;
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

bool UpdateClientByAccountNumber(string UserAccountNumber, vector <stClient>& vClients)
{
	stClient Client;
	char Answer = 'N';

	if (CheckIfClientAccountExist(Client, UserAccountNumber, vClients))
	{
		PrintClientByAccountNumber(Client);

		cout << "Are You Sure you want to Update this Client [Y/y] ? ";
		cin >> Answer;

		if (toupper(Answer) == 'Y')
		{
			for (stClient& C : vClients)
			{
				if (C.AccountNumber == UserAccountNumber)
				{
					C = ChangeClientRecord(UserAccountNumber);
					break;
				}
			}

			SaveClientsDataToFile(ClientsFileName, vClients);

			cout << "Client Updated Successfully";
			return true;
		}
	}
	else
	{
		cout << "Client With Account Number (" << UserAccountNumber << ") Not Found!";
		return false;
	}
}

void PrintResults()
{
	stClient Client;
	string UserAccountNumber = ReadString("please Enter Account Number ? ");
	vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);

	UpdateClientByAccountNumber(UserAccountNumber, vClients);
}

int main()
{
	PrintResults();

	system("pause>0");

	return 0;
}
