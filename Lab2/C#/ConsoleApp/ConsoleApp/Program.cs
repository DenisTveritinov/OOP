using System;
using StrLibrary;


class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Конструктор за замовчуваннямч");
        Str str1 = new Str();
        str1.fillStr("Hello");
        Console.WriteLine(new string(str1.getStr()));

        Console.WriteLine("Констурктор за замовчуванням + рядок");
        Str str2 = new Str("World!");
        Console.WriteLine(new string(str2.getStr()));

        Console.WriteLine("Констурктор копіювання");
        Str str4 = new Str(str2); // копия str2
        Console.WriteLine(new string(str4.getStr()));

        Console.WriteLine("Метод Push");
        str4.PushStr();
        Console.WriteLine(new string(str4.getStr()));
    }
}

