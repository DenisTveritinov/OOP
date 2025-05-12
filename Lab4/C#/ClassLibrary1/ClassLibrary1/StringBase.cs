namespace ClassLibrary1
{
    public class StringBase
    {
        protected string value;

        
        public StringBase(string val)
        {
            value = val;
        }

        
        public string Value
        {
            get { return value; }
        }

        
        public int Length()
        {
            return value.Length;
        }
    }
}
