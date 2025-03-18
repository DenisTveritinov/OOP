using System;
using DinLib;

class Program
{
    static void Main(string[] args)
    {
        Vec Z1 = new Vec();
        Vec Z2 = new Vec(10, 20);
        Vec Z3 = new Vec(50, 40);

        Console.WriteLine($"Z1 (default): r={Z1.GetR()}, angle={Z1.GetAngle()}");
        Console.WriteLine($"Z2 (10, 20): r={Z2.GetR()}, angle={Z2.GetAngle()}");
        Console.WriteLine($"Z3 (50, 40): r={Z3.GetR()}, angle={Z3.GetAngle()}");
        Console.WriteLine("------------------------");

        Z3 = Z3 * 2;
        Z3.RotateAngle(90);

        Console.WriteLine($"Z3 after RotateAngle(90): r={Z3.GetR()}, angle={Z3.GetAngle()}");
        Console.WriteLine("------------------------");

        Z1 = Z2 + Z3;
        Console.WriteLine($"Z1 after Z2 + Z3: r={Z1.GetR()}, angle={Z1.GetAngle()}");

    }
}