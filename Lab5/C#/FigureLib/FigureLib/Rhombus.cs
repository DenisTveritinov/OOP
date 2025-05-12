
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace FigureLib
{
    public class Rhombus : Figures
    {
        private int XA, XB, XC, XD;
        private int YA, YB, YC, YD;
        public Rhombus(int XA, int YA, int XB, int YB,int XC, int YC,int XD, int YD)
        {
            this.XA = XA;
            this.YA = YA;   
            this.XB = XB;
            this.XC = XC;
            this.YC = YC;
            this.XD = XD;
            this.YD = YD;
        }

        public float calcDistance(int X1,int Y1,int X2, int Y2)
        {
            float d = MathF.Sqrt(MathF.Pow(X2 - X1, 2) + MathF.Pow(Y2 - Y1, 2));

            return d;
        }

        public override float calcArea()
        {
            float diag1 = calcDistance(XA, YA, XC, YC);
            float diag2 = calcDistance(XB, YB, XD, YD);

            float area = (diag1 * diag2) / 2;

            return area;
        }

        public override float calcPerimeter()
        {
            float[] sides = new float[4];
            sides[0] = calcDistance(XA, YA, XB, YB);
            sides[1] = calcDistance(XB, YB, XC, YC);
            sides[2] = calcDistance(XC, YC, XD, YD);
            sides[3] = calcDistance(XD, YD, XA, YA);

            float perimeter = sides[0] + sides[1] + sides[2] + sides[3];

            return perimeter;
        }
    }
}
