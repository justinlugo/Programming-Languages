using System;
using System.ComponentModel;
using System.Runtime.ExceptionServices;

public class TestProblem2
{
    class Batsman
    {
        private int bcode;
        private char[] bname = new char[20]; 
        private int innings, notout, runs; 
        private float batavg;
        private void calcavg()
        {
        batavg = (float)runs / (innings - notout);
        }

        public void readdata()
        {
            Console.WriteLine("Enter batsman code:"); 
            bcode = int.Parse(Console.ReadLine()); 
            while (bcode < 999 || bcode > 10000)
            {
                Console.WriteLine("Please enter a correct four digit batsman code: ");
                bcode = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("Enter batsman name:"); 
            string nameString = Console.ReadLine(); 
            for (int i = 0; i < nameString.Length; i++)
            {
                bname[i] = nameString[i];
            }

            Console.WriteLine("Enter amount of innings: "); 
            innings = int.Parse(Console.ReadLine()); 
            Console.WriteLine("Enter amount of notouts: "); 
            notout = int.Parse(Console.ReadLine()); 
            Console.WriteLine("Enter amount of runs:"); 
            runs = int.Parse(Console.ReadLine()); 
            calcavg();
        }

        public void displaydata()
        {
            string nameString = new string(bname); 
            Console.WriteLine("\nBatsman code: " + bcode + "\nBatsman name: "
                + nameString + "\nNumber of Innings: " + innings 
                + "\nNumber of Notouts: " + notout + "\nNumber of Runs: " + runs 
                + "\nBatting Average: " + batavg.ToString("0.00"));
        }
    }

    public static void Main(string[] args)
    {
        Batsman b = new Batsman(); 
        b.readdata(); 
        b.displaydata();
    }
}