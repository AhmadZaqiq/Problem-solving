using System;
using System.Collections.Generic;

class Program
{
    static void IssueTicket(Queue<int> qTicket, int ticketNumber)
    {
        qTicket.Enqueue(ticketNumber);
    }

    static void ServeTicket(Queue<int> qTicket)
    {
        qTicket.Dequeue();
    }

    static void PrintRemainingTickets(Queue<int> qTicket)
    {
        Console.Write("\nRemaining Tickets: ");

        if (qTicket.Count == 0)
        {
            Console.Write("\nNo more tickets in the queue.");
            return;
        }

        foreach (int item in qTicket)
        {
            Console.Write(item + ", ");
        }
    }

    static void TicketingSystem()
    {
        Queue<int> qTicket = new Queue<int>();
        int ticketsCounter = 0;

        while (true)
        {
            Console.Write("\nPress i for issue, s for service: ");

            char UserChar = Console.ReadKey(true).KeyChar;

            if (UserChar.ToString().ToLower() == "i")
            {
                ticketsCounter++;

                IssueTicket(qTicket, ticketsCounter);

                Console.WriteLine("\nTicket " + ticketsCounter + " issued.");
            }

            if (UserChar.ToString().ToLower() == "s")
            {
                if (qTicket.Count == 0)
                {
                    Console.WriteLine("\nNo more tickets in the queue.");
                }
                else
                {
                    Console.WriteLine("\nProcessing Ticket: " + qTicket.Peek());
                    ServeTicket(qTicket);
                    PrintRemainingTickets(qTicket);
                }
            }
        }
    }

    static void Main()
    {
        TicketingSystem();

        Console.ReadKey();
    }
}
