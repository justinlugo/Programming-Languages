using System;
using System.Collections.Generic; 
using System.Linq;

public class TestProblem7
{
    static int[] numbers2 = { 30,31,40,41,50,51,60,61,70,71,72,74,75,100,101,101,200 };

    public static IEnumerable<int> findAns(IEnumerable<int> input)
    {
        IEnumerable<int> ret;
        // Prime numbers in the list.
        ret = input.Select(x => isPrime(x)); 
        return ret;
    }

    public static bool isPrime(int num)
    {
        if (num <= 1)
        {
            return false;
        }

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }

        return true;
    }

    public static void Main(string[] args)
    {
        var answer = TestProblem7.findAns(numbers2);
        foreach(int i in answer)
        {
            Console.WriteLine(i);
        }
    }
}
