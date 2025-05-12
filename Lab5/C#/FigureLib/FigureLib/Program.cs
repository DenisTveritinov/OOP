using FigureLib;
using System;

class Program
{
    static void Main(string[] args)
    {
        Circle circle = new Circle(25);
        Rhombus rhombus = new Rhombus(0, 5, 5, 0, 0, -5, -5, 0);


        Console.WriteLine(circle.calcArea());
        Console.WriteLine(rhombus.calcArea());
    }
}