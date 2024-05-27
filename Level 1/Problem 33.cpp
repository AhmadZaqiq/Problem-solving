//Ahmad JR
#include <iostream>
#include <cmath>

using namespace std;

int ReadGrade(int From, int To)
{
	int Grade;

	do {

		cout << "Enter The Grade: ";
		cin >> Grade;

	} while (Grade < From || Grade>To);

	return Grade;
}

char PrintGradeInLetters(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';

	else
		return 'F';
}

int main()
{
	cout << PrintGradeInLetters(ReadGrade(0, 100));

	system("pause>0");

	return 0;
}

