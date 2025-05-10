using System;
using ClassLibrary1;

namespace StringConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введіть рядок: ");
            string input = Console.ReadLine();

            CharString str = new CharString(input);

            Console.WriteLine($"Рядок: {str}");
            Console.WriteLine($"Довжина: {str.Length()}");
            Console.WriteLine($"Відсортовано за спаданням: {str.SortDescending()}");
        }
    }
}
