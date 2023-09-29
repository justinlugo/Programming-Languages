using System;

public class TestProblem4
{
    class Animal
    {
        public void eat()
        {
            Console.WriteLine("OMNOMNOMNOM. (They're eating).");
        }

        public void breath()
        {
            Console.WriteLine("PANTPANTPANT. (They're breathing).");
        }

        public void sleep()
        {
            Console.WriteLine("HONKSHOO. (They're sleeping).");
        }
    }

    class Turtle : Animal
    {
        public void retract()
        {
            Console.WriteLine("*Turtle retract sound*. (Turtle is hiding in shell).");
        }
    }
    class Dog : Animal
    {
        public void bark()
        {
            Console.WriteLine("ARF. (Dog is barking).");
        }
    }

    class Bird : Animal
    {
        public void fly()
        {
            Console.WriteLine("WOOSH. (Bird is flying).");
        }
    }

    static void Main(string[] args)
    {
        Turtle t = new Turtle(); 
        Dog d = new Dog();
        Bird b = new Bird();

        t.breath();
        t.retract();

        d.breath();
        d.bark();

        b.breath();
        b.fly();
    }
}
