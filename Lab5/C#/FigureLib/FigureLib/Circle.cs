using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FigureLib
{
    public class Circle : Figures
    {
        private float radius;

        public Circle(int radius)
        {
            this.radius = radius;
        }

        public override float calcArea()
        {
            float area = MathF.PI * MathF.Pow(radius, 2);
            return area;
        }

        public override float calcPerimeter()
        {
            float perimeter = MathF.PI * 2 * radius;
            return perimeter;
        }
    }
}
