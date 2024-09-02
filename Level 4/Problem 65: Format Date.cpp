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

string ReplaceWordInString(string S1, string Replacementword, string  WordToBeReplaced)
{
	short pos = S1.find(Replacementword);

	while (pos != string::npos)
	{
		S1 = S1.replace(pos, Replacementword.length(), WordToBeReplaced);
		pos = S1.find(Replacementword);
	}
	return S1;
}

string FormateDate(stDate Date, string DateForomat = "dd/mm/yyyy")
{
	string FormattedDateString = "";

	FormattedDateString = ReplaceWordInString(DateForomat, "dd", to_string(Date.Day));
	FormattedDateString = ReplaceWordInString(FormattedDateString, "mm", to_string(Date.Month));
	FormattedDateString = ReplaceWordInString(FormattedDateString, "yyyy", to_string(Date.Year));

	return FormattedDateString;
}

void PrintResult()
{
	string sDate = ReadString("Please Enter Date dd/mm/yyyy ?");

	stDate Date = StringToDate(sDate);

	cout << "\n" << FormateDate(Date) << "\n";

	cout << "\n" << FormateDate(Date, "dd/mm/yyyy") << "\n";

	cout << "\n" << FormateDate(Date, "yyyy/dd/mm") << "\n";

	cout << "\n" << FormateDate(Date, "mm-dd-yyyy") << "\n";

	cout << "\n" << FormateDate(Date, "dd-mm-yyyy") << "\n";

	cout << "\n" << FormateDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

}

int main()
{
	PrintResult();

	system("Pause>0");
}
