using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static Queue<int> RotateQueue(Queue<int> queue, int Position)
    {
        for (int i = 0; i < Position; i++)
        {
            queue.Enqueue(queue.Dequeue());
        }

        return queue;
    }

    static void PrintQueue(Queue<int> queue)
    {
        Console.Write("\n");

        foreach (int item in queue)
        {
            Console.Write(" " + item);
        }
    }

    static void Main()
    {
        Queue<int> queue = new Queue<int>(new[] { 1, 2, 3, 4, 5 });

        queue = RotateQueue(queue, 2);

        PrintQueue(queue);

        Console.ReadKey();
    }
}

