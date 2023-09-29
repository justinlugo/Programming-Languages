using System;
using System.Collections.Generic;
using System.Linq;

public class Problem2
{
    public static IEnumerable<int> myFilter(IEnumerable<int> input)
    {
        IEnumerable<int> ret;

        // Cannot be multiples of 6 less than 42. Square it. Only take evens.
        ret = input.Where(x => !(x % 6 == 0 && x < 42)).Select(x => x * x).Where(x => (x % 2 == 0));
        return ret;
    }

    public static void Main(string[] args)
    {
        Random rnd = new Random(5); // Instructions don't say to seed...will seed to ensure is correct.
        var listForProblem = Enumerable.Range(1,100).Select(i => rnd.Next() % 101);
        var answer = Problem2.myFilter(listForProblem);
        foreach(int i in answer)
        {
            Console.WriteLine(i);
        }
    }
}