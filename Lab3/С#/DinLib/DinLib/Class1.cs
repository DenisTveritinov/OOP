using System;

namespace DinLib
{
    public class Vec
    {
        private int r;
        private int angle;


        public Vec()
        {
            r = 0;
            angle = 0;
        }

        public Vec(int r, int angle)
        {
            this.r = r;
            this.angle = NormalizeAngle(angle);
        }

        public Vec(Vec other)
        {
            r = other.r;
            angle = other.angle;
        }

        public int GetR()
        {
            return r;
        }

        public int GetAngle()
        {
            return angle;
        }

        public static Vec operator *(Vec v, int mult)
        {
            return new Vec(v.r * mult, v.angle);
        }
        public static Vec operator +(Vec v1, Vec v2)
        {
            int newR = v1.r + v2.r;
            int newAngle = v1.NormalizeAngle(v1.angle + v2.angle);
            return new Vec(newR, newAngle);
        }

        public void RotateAngle(int add)
        {
            angle = NormalizeAngle(angle + add);
        }

        private int NormalizeAngle(int add)
        {
            add = add % 360;
            if (add < 0) add += 360;
            return add;
        }
    }
}


