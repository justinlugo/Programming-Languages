using System;
using System.Collections.Generic; 
using System.IO;

public class TestProblem3
{
    public static void Main(string[] args)
    {
        int count = 0;
        // Doc says STORY.TXT, but the capitalized txt prevents it from working. var reader = new StreamReader(File.OpenRead("STORY.txt"));
        while ( !reader.EndOfStream )
        {
            var line = reader.ReadLine(); 
            if (line[0] != 'A')
            {
                count++;
            }
        }
        Console.WriteLine(count.ToString()); 
        reader.Close();
    }
}
