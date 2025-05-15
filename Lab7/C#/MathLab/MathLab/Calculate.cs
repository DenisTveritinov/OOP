using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MathLab
{
    public class Calculate
    {
        private double a, b, c;

        public Calculate(double a,double b,double c)
        {
            this.a = a;
            this.b = b; 
            this.c = c;
        }

        public double calculateLog(double value)
        {
            if(value <= 0)
            {
                throw new ArgumentException("Invalid argument");
            }
            return Math.Log(value);
        }

        public double calculateExample()
        {
            if(c == 0)
            {
                throw new InvalidOperationException("C cannot be 0");
            }

            double denominator = 41 - (b / c) + 1;
            if(denominator == 0)
            {
                throw new InvalidOperationException("Denominator cannot be 0");
            }

            double numerator = calculateLog(a * b + 2) * c;
            double result = numerator / denominator;

            return result;

        }
    }
}
