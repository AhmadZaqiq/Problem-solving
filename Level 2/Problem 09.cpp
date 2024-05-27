//Ahmad JR
#include<iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Num = 0;
    do {
        cout << Message << "\n";
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int CalculateDigitFrequency(int Number, short Digit)
{
    int Reminder = 0, FreqCount = 0;
    while (Number > 0) {
        Reminder = Number % 10;
        Number /= 10;
        if (Reminder == Digit)
            FreqCount++;
    }
    return FreqCount;
}

void PrintAllDigitsFrequency(int Number)
{
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = CalculateDigitFrequency(Number, i);
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency Is: " << DigitFrequency << " Time(s)" << endl;
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please Enter A Number");
    PrintAllDigitsFrequency(Number);

    system("pause>0");

    return 0;

}



