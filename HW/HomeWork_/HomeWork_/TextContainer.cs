using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeWork_
{
    internal class TextContainer
    {
        private List<string> text;
        public TextContainer(List<string> lines)
        {
            text = lines;
        }

        public int this[int index]
        {
            get
            {
                if (index < 0 || index >= text.Count)
                    throw new IndexOutOfRangeException("Невірний індекс");
                return text[index].Length;
            }
        }

        public int getNumberVowels()
        {
            int count = 0;
            char[] vowels = { 'a', 'i', 'e', 'o', 'u' };

            foreach (string line in text)
            {
                foreach (char ch in line)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        if (ch == vowels[i])
                        {
                            count++;
                        }
                    }
                }
            }

            return count;

        }
    }
}
