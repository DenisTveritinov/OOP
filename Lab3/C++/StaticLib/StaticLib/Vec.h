#pragma once

class Vec {
private:
    int r;
    int angle;

public:
    Vec();
    Vec(int r, int angle);
    Vec(const Vec& other);

    int getR();
    int getAngle();

    Vec operator*(double mult);
    Vec operator+(Vec add);

    int normalizeAngle(int add);
    void rotateAngle(int add);
};