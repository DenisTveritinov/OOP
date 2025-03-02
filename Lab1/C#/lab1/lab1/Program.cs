using System;
class Str
{
    private char[] arr;

    public Str()
    {
        arr = new char[1];
        arr[0] = '\0';
    }

    public void fillStr(string fArr)
    {
        arr = fArr.ToCharArray();
    }

    public char[] getStr()
    {
        if (arr != null)
        {
            return (char[])arr.Clone();
        }
        return null;
    }

    public int countStr()
    {
        return arr.Length;
    }
    public void PushStr()
    {
        if (arr.Length <= 1) return;

        char lastCh = arr[arr.Length - 1];
        for (int i = arr.Length - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = lastCh;
    }


}

class Program()
{
    static void Main()
    {
        Str first = new Str();

        first.fillStr("1234");
        Console.WriteLine("String " + new string(first.getStr()));
        Console.WriteLine("Length: " + first.countStr());

        first.PushStr();
        Console.WriteLine("String after push: " + new string(first.getStr()));
    }
}
