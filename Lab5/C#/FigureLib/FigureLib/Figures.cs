using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FigureLib
{
    public class Figures
    {
        public virtual float calcArea()
        {
            Console.WriteLine("calcArea called");
            return 0;
        }

        public virtual float calcPerimeter()
        {
            Console.WriteLine("calcPerimeter called");
            return 0;
        }
    }
}
