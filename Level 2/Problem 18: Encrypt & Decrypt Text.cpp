//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

string ReadName(string Text)
{

	cout << Text;
	getline(cin, Text);

	return Text;
}

string EncryptText(string Name, const short Key)
{
	for (int i = 0; i < Name.length(); i++)
	{
		Name[i] = char(int(Name[i]) + Key);
	}
	return Name;
}

string DecryptText(string Encrypt, const short Key)
{
	for (int i = 0; i < Encrypt.length(); i++)
	{
		Encrypt[i] = char(int(Encrypt[i]) - Key);
	}
	return Encrypt;
}

int main()
{
	const short Key = 2;

	string Name = ReadName("Enter Any Name: ");
	string Encrypt = EncryptText(Name, Key);
	string Decrypt = DecryptText(Encrypt, Key);

	cout << "Text Before Encrypt [" << Name << "]\n";
	cout << "Text After Encrypt [" << Encrypt << "]\n";
	cout << "Text After Decrypt [" << Decrypt << "]\n";

	return 0;
}
