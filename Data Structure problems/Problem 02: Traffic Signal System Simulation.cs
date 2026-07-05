using System;
using System.Collections.Generic;

class Program
{
    static Stack<string> InitializeTraffic()
    {
        Stack<string> stTraffic = new Stack<string>();

        stTraffic.Push("Car 1");
        stTraffic.Push("Truck 1");
        stTraffic.Push("Bike 1");
        stTraffic.Push("Bus 1");

        return stTraffic;
    }

    static void PrintWaitingVehicles(Stack<string> stTraffic)
    {
        Console.Write("Vehicles Waiting: ");

        if (stTraffic.Count == 0)
        {
            Console.Write("No vehicles waiting");
            return;
        }

        foreach (string item in stTraffic)
        {
            Console.Write(item + ", ");
        }

        Console.WriteLine();
    }

    static void ProcessTraffic(Stack<string> stTraffic)
    {
        int Count = stTraffic.Count;

        for (int i = 0; i < Count; i++)
        {
            Console.WriteLine("\n" + stTraffic.Peek() + " Has Passed the Signal");

            stTraffic.Pop();

            PrintWaitingVehicles(stTraffic);
        }
    }

    static void Main()
    {
        Stack<string> stTraffic = InitializeTraffic();

        Console.WriteLine("Traffic Signal Simulation Started...");

        ProcessTraffic(stTraffic);

        Console.WriteLine("\nTraffic Signal Simulation Ended");

        Console.ReadKey();
    }

}
