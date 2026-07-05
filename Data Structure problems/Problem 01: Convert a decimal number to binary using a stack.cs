using System;
using System.Collections.Generic;

class Program
{
    static int ReadNumber(string message = "Please Enter a + Number:")
    {
        int Number;

        do
        {
            Console.WriteLine(message);

            Number = int.Parse(Console.ReadLine());

        } while (Number < 0);

        return Number;
    }

    static Stack<int> ConvertDecimalToBinary(int Number)
    {
        Stack<int> stDecimal = new Stack<int>();

        if (Number == 0)
        {
            stDecimal.Push(0);
        }

        while (Number != 0)
        {
            stDecimal.Push(Number % 2);
            Number /= 2;
        }

        return stDecimal;
    }

    static void PrintBinaryNumber(Stack<int> stDecimal)
    {
        foreach (int item in stDecimal)
        {
            Console.Write(item);
        }
    }

    static void Main()
    {
        int Number = ReadNumber();

        Stack<int> stDecimal = ConvertDecimalToBinary(Number);

        PrintBinaryNumber(stDecimal);

        Console.ReadKey();
    }

}
