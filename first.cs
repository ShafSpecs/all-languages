using System;
namespace ShafSpecs
{
    public class Program
    {
        public static void Main(string[] args)
        {
            double r, AREA;
            const double PI = 3.14;   
 
            Console.WriteLine("———————————————————————————————————————————");
            Console.WriteLine("Program to calculate the area and circumference of a circle");
            Console.WriteLine("———————————————————————————————————————————");

            Console.Write("\nEnter the radius of circle ");
            r = Convert.ToDouble(Console.ReadLine());

            AREA = PI * r * r;
            Console.WriteLine("\nThe area of circle is {0} when radius is {1}", AREA, r);
            Console.WriteLine("\nThe circumference of circle is {0}", 2 * PI * r);          
            Console.WriteLine("———————————————————————————————————————————");
        }
    }
} 
