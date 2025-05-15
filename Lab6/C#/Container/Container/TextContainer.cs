using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Container
{
    internal class TextContainer
    {
        private List<MyString> text;

        public void addLine(MyString line)
        {
            text.Add(line);
        }

        public void deleteLine(int index)
        {
            text.RemoveAt(index);
        }

        public void clearText()
        {
            text.Clear();
        }

        public int totalChars()
        {
            int total = 0;
            foreach (MyString s in text)
            {
                total += s.Length();
            }

            return total;
        }

        public int findLine(string line)
        {
            int index = 0;

            foreach (MyString s in text)
            {
                if(s.getData() == line)
                {
                    break;
                }

                index++;
            }

            return index;
        }

        public void replaceCharacher(char oldCh, char newCh)
        {
            foreach (MyString s in text)
            {
                s.replaceChar(oldCh, newCh);
            }
        }
    }

}
