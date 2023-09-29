using System;

class Program
{
    static Thread[] thrd = new Thread[4];
    static int[] data = new int[10000000];

    static void calc(int startingIndex, int reps)
    {
        for (int i = startingIndex; i < (startingIndex + reps); i++)
        {
            data[i] = (int)(Math.Atan(i) * Math.Acos(i) * Math.Cos(i) * Math.Sin(i));
        }
    }

    static void Main(string[] args)
    {
        // Sequential.
        DateTime dtS = DateTime.Now;
        calc(0, data.Length);
        TimeSpan ts = DateTime.Now - dtS;
        Console.WriteLine("Sequentially:");
        Console.WriteLine("{0} milliseconds\n", ts.TotalMilliseconds);

        // Multithread.
        int repsPerThread = data.Length / thrd.Length;
        for (int i = 0; i < thrd.Length; i++)
        {
            int j = i;
            thrd[i] = new Thread(() => calc(j * repsPerThread, repsPerThread));
            thrd[i].Start();
        }
        DateTime dtM = DateTime.Now;
        for (int i = 0; i < thrd.Length; i++)
        {
            thrd[i].Join();
        }
        TimeSpan tsM = DateTime.Now - dtM;
        Console.WriteLine("Multithreaded:");
        Console.WriteLine("{0} milliseconds", tsM.TotalMilliseconds);
    }
}