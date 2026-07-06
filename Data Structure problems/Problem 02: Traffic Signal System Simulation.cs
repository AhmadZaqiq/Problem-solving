using System;
using System.Collections.Generic;

class Program
{
    static Queue<string> InitializeTraffic()
    {
        Queue<string> qTraffic = new Queue<string>();

        qTraffic.Enqueue("Car 1");
        qTraffic.Enqueue("Truck 1");
        qTraffic.Enqueue("Bike 1");
        qTraffic.Enqueue("Bus 1");

        return qTraffic;
    }

    static void PrintWaitingVehicles(Queue<string> qTraffic)
    {
        Console.Write("Vehicles Waiting: ");

        if (qTraffic.Count == 0)
        {
            Console.Write("No vehicles waiting");
            return;
        }

        foreach (string item in qTraffic)
        {
            Console.Write(item + ", ");
        }

        Console.WriteLine();
    }

    static void ProcessTraffic(Queue<string> qTraffic)
    {
        while (qTraffic.Count > 0)
        {
            Console.WriteLine("\n" + qTraffic.Peek() + " Has Passed the Signal");

            qTraffic.Dequeue();

            PrintWaitingVehicles(qTraffic);
        }
    }

    static void Main()
    {
        Queue<string> qTraffic = InitializeTraffic();

        PrintWaitingVehicles(qTraffic);

        Console.WriteLine("\nTraffic Signal Simulation Started...");

        ProcessTraffic(qTraffic);

        Console.WriteLine("\nTraffic Signal Simulation Ended");

        Console.ReadKey();
    }
}
