using System;
namespace FirstCSOop
{
    class Animal
    {
        public void move()
        {
            Console.WriteLine("The animal is moving.");
        }

        public void sleep()
        {
            Console.WriteLine("The animal is sleeping");
        }

        public void eat()
        {
            Console.WriteLine("The animal is eating");
        }
    }

    class Dog : Animal
    {
        public void sing()
        {
            Console.WriteLine("The dog is singing.");
        }

        public void wash()
        {
            Console.WriteLine("The dog is washing.");
        }

        public void turnAround()
        {
            Console.WriteLine("The dog is turning around.");
        } 
    }

    class Cat : Animal
    {
        public void sing()
        {
            Console.WriteLine("The cat is singing.");
        }

        public void wash()
        {
            Console.WriteLine("The cat is washing.");
        }

        public void turnAround()
        {
            Console.WriteLine("The cat is turning around.");
        } 
    }

    class Bird : Animal
    {
        public void sing()
        {
            Console.WriteLine("The bird is singing.");
        }

        public void wash()
        {
            Console.WriteLine("The bird is washing.");
        }

        public void turnAround()
        {
            Console.WriteLine("The bird is turning around.");
        } 
    }
    
    interface IUFO
    {
        void fly();
        void goToHyperspace();
        void land();
    }

    class SmallCraft : IUFO
    {        
        public void fly()
        {
            Console.WriteLine("The small craft is flying.");
        }

        public void goToHyperspace()
        {
            Console.WriteLine("The small craft is going into hyperspace.");
        }

        public void land()
        {
            Console.WriteLine("The small craft is landing.");
        }
    }

    class LargeCraft : IUFO
    {        
        public void fly()
        {
            Console.WriteLine("The large craft is flying.");
        }

        public void goToHyperspace()
        {
            Console.WriteLine("The large craft is going into hyperspace.");
        }

        public void land()
        {
            Console.WriteLine("The large craft is landing.");
        }
    }

    class BossCraft : IUFO
    {        
        public void fly()
        {
            Console.WriteLine("The boss craft is flying.");
        }

        public void goToHyperspace()
        {
            Console.WriteLine("The boss craft is going into hyperspace.");
        }

        public void land()
        {
            Console.WriteLine("The boss craft is landing.");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            //Animal a = new Animal();
            Dog d = new Dog();
            Cat c = new Cat();
            Bird b = new Bird();

            //a.move();
            //a.sleep();
            //a.eat();

            d.move();
            d.sleep();
            d.eat();
            d.sing();
            d.wash();
            d.turnAround();

            c.move();
            c.sleep();
            c.eat();
            c.sing();
            c.wash();
            c.turnAround();

            b.move();
            b.sleep();
            b.eat();
            b.sing();
            b.wash();
            b.turnAround();

            SmallCraft small = new SmallCraft();
            LargeCraft large = new LargeCraft();
            BossCraft boss = new BossCraft();

            small.fly();
            small.goToHyperspace();
            small.land();

            large.fly();
            large.goToHyperspace();
            large.land();

            boss.fly();
            boss.goToHyperspace();
            boss.land();
        }
    }
}