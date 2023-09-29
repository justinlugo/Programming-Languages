using System;
using System.Collections.Generic; 
using System.Linq;

public class TestProblem5
{
    static int[] numbers1 = { 1,3,5,6,7,8,9,10,11,12,13,29,30,31,32,33 };
    static int[] numbers2 = { 30,31,40,41,50,51,60,61,70,71,72,74,75,100,101,101,200 };
    public static IEnumerable<int> findAns(IEnumerable<int> input1, IEnumerable<int> input2)
    {
        IEnumerable<int> ret;
        // Integers contained in both lists; only take the odds that are multiples of five.
        ret = input1.Intersect(input2).Where(x => !(x % 2 == 0)).Where(x => (x % 5) == 0);
        return ret;
    }

    public static void Main(string[] args)
    {
        var answer = TestProblem5.findAns(numbers1, numbers2); 
        foreach(int i in answer)
        {
            Console.WriteLine(i);
        }
    }
}
