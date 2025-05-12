namespace ClassLibrary1
{
    public class CharString : StringBase
    {
        
        public CharString(string val) : base(val)
        {
        }

        
        public string SortDescending()
        {
            char[] chars = value.ToCharArray();
            Array.Sort(chars);
            Array.Reverse(chars);
            return new string(chars);
        }

        
        public override string ToString()
        {
            return value;
        }
    }
}
