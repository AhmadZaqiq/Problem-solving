//Ahmad JR
#include <iostream>

using namespace std;

void FillArrayWithNumbers(int Arr[100], int& ArrLength)
{
    ArrLength = 10;

    Arr[0] = 10;
    Arr[1] = 10;
    Arr[2] = 10;
    Arr[3] = 50;
    Arr[4] = 50;
    Arr[5] = 70;
    Arr[6] = 70;
    Arr[7] = 70;
    Arr[8] = 70;
    Arr[9] = 90;
}

void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}

short FindNumberAndPositionInArray(int Arr[100], int ArrLength, short NumberToSearch)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] == NumberToSearch)
        {
            return i;
        }
    }

    return -1;
}

bool SearchNumberInArray(int Arr[100], int ArrLength, short NumberToSearch)
{
    return FindNumberAndPositionInArray(Arr, ArrLength, NumberToSearch) != -1;
}

void AddArrayElement(int Number, int Arr[100], int& ArrLength)
{
    ArrLength++;

    Arr[ArrLength - 1] = Number;
}

void CopyDistinctNumbersToArray(int Arr[100], int Arr2[100], int ArrLength, int& Arr2Length)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (!SearchNumberInArray(Arr2, Arr2Length, Arr[i]))
            AddArrayElement(Arr[i], Arr2, Arr2Length);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength = 0;
    int Arr2[100], Arr2Length = 0;

    FillArrayWithNumbers(Arr, ArrLength);

    cout << "Array Elements: [ ";
    PrintArray(Arr, ArrLength);
    cout << "]\n";

    CopyDistinctNumbersToArray(Arr, Arr2, ArrLength, Arr2Length);

    cout << "Distinct Array Elements: [ ";
    PrintArray(Arr2, Arr2Length);
    cout << "]\n";

    return 0;
}

