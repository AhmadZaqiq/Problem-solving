//Ahmad JR
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stDate
{
	short Day, Month, Year;
};

string ReadString(string Message)
{
	string String = "";

	cout << Message;
	getline(cin >> ws, String);

	return String;
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

stDate StringToDate(string sDate)
{
	stDate Date;
	vector <string> vDate = SplitString(sDate, "/");

	Date.Day = short(stoi(vDate[0]));
	Date.Month = short(stoi(vDate[1]));
	Date.Year = short(stoi(vDate[2]));

	return Date;
}

string DateToString(stDate Date)
{
	return  to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

void PrintResult()
{
	string sDate = ReadString("Please Enter Date dd/mm/yyyy ?");

	stDate Date = StringToDate(sDate);

	cout << "Day: " << Date.Day << "\nMonth: " << Date.Month << "\nYear: " << Date.Year;

	cout << "\n\nYou Enterd: " << DateToString(Date);
}

int main()
{
	PrintResult();

	system("Pause>0");
}


