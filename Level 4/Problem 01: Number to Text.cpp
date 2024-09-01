//Ahmad JR
#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    cout << Message;
    cin >> Number;

    return Number;
}

string NumberToText(int Number)
{
    if (Number >= 1 && Number <= 19)
    {
        string Arr[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
                         "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                         "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
        return Arr[Number];
    }

    if (Number >= 20 && Number <= 99)
    {
        string Arr[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty",
                         "Sixty", "Seventy", "Eighty", "Ninety" };

        return Arr[Number / 10] + (Number % 10 != 0 ? " " + NumberToText(Number % 10) : "");
    }

    if (Number >= 100 && Number <= 999)
    {
        return NumberToText(Number / 100) + " Hundred" + (Number % 100 != 0 ? " " + NumberToText(Number % 100) : "");
    }

    if (Number >= 1000 && Number <= 999999)
    {
        return NumberToText(Number / 1000) + " Thousand" + (Number % 1000 != 0 ? " " + NumberToText(Number % 1000) : "");
    }

    if (Number >= 1000000 && Number <= 999999999)
    {
        return NumberToText(Number / 1000000) + " Million" + (Number % 1000000 != 0 ? " " + NumberToText(Number % 1000000) : "");
    }

    if (Number >= 1000000000 && Number <= 999999999999)
    {
        return NumberToText(Number / 1000000000) + " Billion" + (Number % 1000000000 != 0 ? " " + NumberToText(Number % 1000000000) : "");
    }

    return "Number out of range";
}

int main()
{
    int Number = ReadNumber("Please Enter A Number: ");

    cout << NumberToText(Number) << endl;

    system("pause>0");

    return 0;
}
