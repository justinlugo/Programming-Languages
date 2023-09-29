using System;
using System.Collections.Generic;
using System.Linq;

public class TestProblem2
{
    public static IEnumerable<int> merge(IEnumerable<int> input1, IEnumerable<int> input2, IEnumerable<int> input3, IEnumerable<int> input4)
    {
        IEnumerable<int> listIntersect, listAll, ret;
        
        // Only the elements shared between all four lists... which is none
        // because List 2 is solely evens while List 3 is solely odds, unless
        // there's some sort of issue with this problem? Let's call this A.
        listIntersect = input1.Intersect(input2).Intersect(input3).Intersect(input4);
        
        // All elements across all lists put into one list, so that we can
        // perform the first required operation, any multiples of 10. Let's
        // call this B.
        listAll = input1.Union(input2).Union(input3).Union(input4).Where(x => x % 10 == 0);

        // The combination of a list containing elements in all four lists and a
        // list containing all elements in all lists filtered to the multiples
        // of 10 in said list. Final list will be equal to A AND B (aka whatever
        // exists in both the first and second lists)...which would be empty.
        ret = listIntersect.Intersect(listAll);

        return ret;
    }
    
    public static void Main(string[] args)
    {
        // Random rnd = new Random();
        // Instructions have the above as a line, but it serves no purpose
        // and instead gives me a warning due to being unused, so I'm just
        // going to comment it out.
        
        // 1 - 15
        var list1 = Enumerable.Range(1,15);
        
        // 2 - 42, evens
        var list2 = Enumerable.Range(2,42).Where(x => x % 2 == 0);
        
        // 3 - 21, odds
        var list3 = Enumerable.Range(3,21).Where(x => x % 2 != 0);
        
        // 5 - 105, multiples of 5
        var list4 = Enumerable.Range(5,105).Where(x => x % 5 == 0);
        
        var answer = TestProblem2.merge(list1, list2, list3, list4);
        foreach(int i in answer)
        {
            Console.WriteLine(i);
        }
    }
}