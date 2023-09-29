using System;
using System.Collections.Generic; 
using System.Linq;

public class TestProblem6
{
    static int[] numbers3 = { -5, -6, -7, -8, 47, 50, 60, 1000, 2000, 3000 };

    public static IEnumerable<int> findAns(IEnumerable<int> input)
    {
        IEnumerable<int> ret;
        // Square all integers in list; only take the resulting squares that are odd.
        ret = input.Select(x => x * x).Where(x => !(x % 2 == 0)); 
        return ret;
    }

    public static void Main(string[] args)
    {
        var answer = TestProblem6.findAns(numbers3); 
        foreach(int i in answer)
        {
            Console.WriteLine(i);
        }
    }
}
