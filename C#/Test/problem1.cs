using System;
using System.ComponentModel;
using System.Runtime.ExceptionServices;

public class TestProblem1
{
    class Student
    {
        private int admno;
        private char[] sname = new char[20]; 
        private float eng, math, science; 
        private float ctotal()
        {
            return eng + math + science;
        }

        public void Takedata()
        {
            Console.WriteLine("Enter admission number:"); admno = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter student name:"); 
            string nameString = Console.ReadLine(); 
            for (int i = 0; i < nameString.Length; i++)
            {
                sname[i] = nameString[i];
            }

            Console.WriteLine("Enter English score: "); 
            eng = int.Parse(Console.ReadLine()); 
            Console.WriteLine("Enter Math score: "); 
            math = int.Parse(Console.ReadLine()); 
            Console.WriteLine("Enter Science score:"); 
            science = int.Parse(Console.ReadLine());
        }

    public void Showdata()
    {    
        string nameString = new string(sname); 
        Console.WriteLine("\nAdmission number: " + admno + "\nStudent name: "
            + nameString + "\nEnglish score: " + eng + "\nMath score: " + math
            + "\nScience score:" + science + "\nTotal score: " + ctotal());
    }
}

    public static void Main(string[] args)
    {
        Student s = new Student(); 
        s.Takedata();
        s.Showdata();
    }
}
