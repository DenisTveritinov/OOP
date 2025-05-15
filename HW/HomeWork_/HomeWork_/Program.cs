using System;
using HomeWork_;

class Program
{
    static void Main()
    {
        List<string> list = new List<string>();
        list.Add("loloo");
        list.Add("lolo323o");
        list.Add("fdgfdgfd");
        TextContainer textContainer = new TextContainer(list);

        Console.WriteLine(textContainer.getNumberVowels());
        Console.WriteLine(textContainer[2]);
    }
}