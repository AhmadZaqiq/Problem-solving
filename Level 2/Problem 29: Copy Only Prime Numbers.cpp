//Ahmad JR
#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

enum enPrimeNotprime { Prime = 0, NotPrime = 1 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
    cout << "Enter The Length Of Array:";
    cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}

enPrimeNotprime CheckIfPrimeNumber(int num)
{
    if (num <= 1)
        return enPrimeNotprime::NotPrime;

    int M = sqrt(num);

    for (int i = 2; i <= M; i++)
    {
        if (num % i == 0)
            return enPrimeNotprime::NotPrime;
    }
    return enPrimeNotprime::Prime;
}

void FillPrimeNumberInArray(int Arr[100], int ArrLength, int Arr2[100], int& Arr2Length)
{
    int Counter = 0;
    Arr2Length = 0;

    for (int i = 0; i < ArrLength; i++)
    {
        if (CheckIfPrimeNumber(Arr[i]) == enPrimeNotprime::Prime)
        {
            Arr2[Counter] = Arr[i];
            Counter++;
        }
    }
    Arr2Length = Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength, Arr2[100], Arr2Length = 0;

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "Array Elements: [ ";

    PrintArray(Arr, ArrLength);

    cout << "]";

    FillPrimeNumberInArray(Arr, ArrLength, Arr2, Arr2Length);


    cout << "\nPrime Numbers in Array: [ ";
    PrintArray(Arr2, Arr2Length);

    cout << "]\n";

    system("pause>0");

    return 0;
}
