using System;

namespace StrLibrary
{
    public class Str
    {
        private char[] arr;

        public Str()
        {
            arr = new char[1];
            arr[0] = '\0';
        }

        public Str(string str)
        {
            if (str != null)
            {
                arr = str.ToCharArray();
            }
            else
            {
                arr = new char[1] { '\0' };
            }
        }

        public Str(Str other)
        {
            if (other != null && other.arr != null)
            {
                arr = (char[])other.arr.Clone();
            }
            else
            {
                arr = new char[1] { '\0' };
            }
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
}
