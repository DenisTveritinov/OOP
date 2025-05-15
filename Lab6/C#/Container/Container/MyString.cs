using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using static System.Net.Mime.MediaTypeNames;

namespace Container
{
    internal class MyString : IReplaceable
    {
        private string data;

        public MyString(string data)
        {
            this.data = data;
        }

        public void replaceChar(char oldChar, char newChar)
        {
            char[] chars = data.ToCharArray();

            for (int i = 0; i < chars.Length; i++)
            {
                if (chars[i] == oldChar)
                {
                    chars[i] = newChar;
                }
            }

            data = new string(chars);
        }

        public string getData()
        {
            return data;
        }

        public int Length()
        {
            return data.Length;
        }
    }
}
