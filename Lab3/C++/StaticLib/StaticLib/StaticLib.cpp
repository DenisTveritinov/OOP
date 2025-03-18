#include <iostream>
#include "pch.h"
#include <math.h>
#include "Vec.h"

Vec::Vec() {
    r = 0;
    angle = 0;
}

Vec::Vec(int r, int angle) {
    this->r = r;
    this->angle = normalizeAngle(angle);
}

Vec::Vec(const Vec& other) {
    r = other.r;
    angle = other.angle;
}

int Vec::getR() {
    return this->r;
}

int Vec::getAngle() {
    return this->angle;
}


Vec Vec::operator*(double mult) {
    return Vec(r * mult, angle);
}

Vec Vec::operator+(Vec add) {
    int new_r = r + add.getR();
    int new_angle = normalizeAngle(angle + add.getAngle());
    return Vec(new_r, new_angle);
}

int Vec::normalizeAngle(int add) {
    add = add % 360;
    if (add < 0) {
        add += 360;
    }
    return add;
}

void Vec::rotateAngle(int add) {
    angle += add;
    angle = angle % 360;
    if (angle < 0) {
        angle += 360;
    }
}