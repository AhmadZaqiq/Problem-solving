//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

string ReadString(string Message)
{
	string String = "";

	cout << Message;
	getline(cin, String);

	return String;
}

string UpperAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
		S1[i] = toupper(S1[i]);

	return S1;
}

string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
		S1[i] = tolower(S1[i]);

	return S1;
}

int main()
{
	string Su = UpperAllString(ReadString("Please Enter Ur String: "));
	string Sl = LowerAllString(Su);


	cout << "\nString After Upper: " << Su << "\n\n";
	cout << "String After Lower: " << Sl << "\n\n";

	system("pause>0");

	return 0;
}
