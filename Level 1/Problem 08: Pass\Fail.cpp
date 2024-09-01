//Ahmad JR
#include <iostream>

using namespace std;

enum enPassFail { Fail = 0, Pass = 1 };

int ReadMark()

{
	int Mark;

	do {

		cout << "Enter The Mark: ";
		cin >> Mark;

	} while (Mark > 100 || Mark < 0);

	return Mark;
}

enPassFail ChechResult(int Mark)

{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;

}

void PrintResult(int Mark)

{
	if (ChechResult(Mark) == enPassFail::Pass)
		cout << "Pass :)";

	else
		cout << "FAil :(";
}

int main()
{

	PrintResult(ReadMark());

	system("pause>0");

}

