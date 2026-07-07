using System;
using System.Collections.Generic;

class Program
{
    static int ReadNumberFromUser(string message)
    {
        Console.Write(message);

        return int.Parse(Console.ReadLine());
    }


    static void FillQueueFromUser(Queue<int> queue)
    {
        int Count = ReadNumberFromUser("How many numbers do you want to enter? ");

        for (int i = 0; i < Count; i++)
        {
            int number = ReadNumberFromUser($"Enter number {i + 1}: ");

            queue.Enqueue(number);
        }
    }


    static Stack<int> CreateStackFromQueue(Queue<int> queue)
    {
        Queue<int> qTemp = new Queue<int>(queue);

        Stack<int> stack = new Stack<int>();

        while (qTemp.Count > 0)
        {
            stack.Push(qTemp.Dequeue());
        }

        return stack;
    }


    static bool IsPalindromeUsingQueue(Queue<int> queue)
    {
        if (queue.Count == 0)
        {
            return true;
        }


        Stack<int> stack = CreateStackFromQueue(queue);

        foreach (int item in queue)
        {
            if (item != stack.Peek())
            {
                return false;
            }

            stack.Pop();
        }

        return true;
    }

    static void Main()
    {
        Queue<int> queue = new Queue<int>();

        FillQueueFromUser(queue);

        Console.WriteLine(IsPalindromeUsingQueue(queue));

        Console.ReadKey();
    }
}
