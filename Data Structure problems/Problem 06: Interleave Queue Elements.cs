using System;
using System.Collections.Generic;
using System.Linq;

class Program
{

    enum Half
    {
        FirstHalf,
        SecondHalf
    }

    static Queue<int> GetHalfQueue(Queue<int> queue, Half enHalf)
    {
        Queue<int> qResult = new Queue<int>();

        if (enHalf == Half.FirstHalf)
        {
            int QueueCount = queue.Count;

            for (int i = 0; i < QueueCount / 2; i++)
            {
                qResult.Enqueue(queue.Dequeue());
            }

            return qResult;
        }

        int RestOfTheQueueCount = queue.Count;

        for (int i = 0; i < RestOfTheQueueCount; i++)
        {
            qResult.Enqueue(queue.Dequeue());
        }

        return qResult;
    }

    static Queue<int> InterleaveOrder(Queue<int> qFirstHalf, Queue<int> qSecondHalf)
    {
        Queue<int> queue = new Queue<int>();


        while (qFirstHalf.Count > 0 && qSecondHalf.Count > 0)
        {
            queue.Enqueue(qFirstHalf.Dequeue());
            queue.Enqueue(qSecondHalf.Dequeue());
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
        Queue<int> queue = new Queue<int>(new[] { 1, 2, 3, 4, 5, 6 }); //The Count of the Queue Must be even

        Queue<int> qFirstHalf = GetHalfQueue(queue, Half.FirstHalf);

        PrintQueue(qFirstHalf);

        Queue<int> qSecondHalf = GetHalfQueue(queue, Half.SecondHalf);

        PrintQueue(qSecondHalf);

        Queue<int> qInterleaveOrder = InterleaveOrder(qFirstHalf, qSecondHalf);

        PrintQueue(qInterleaveOrder);

        Console.ReadKey();
    }
}

