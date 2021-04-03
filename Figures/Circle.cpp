//
// Created by Bogdan on 02/04/2021.
//

#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(unsigned int size, unsigned char symbol, unsigned char backgroundSymbol, unsigned int r) :
        DrawableShape(size, symbol, backgroundSymbol),
        _r(r) {}

void Circle::draw() {

    fillMatrix();
    double rCenter = 0.5;
    double rR = static_cast<double>(_r) / _size;

    double x = rCenter;
    double y = rCenter - rR;

    double t = 1./_size;
    double vx = 1;
    double vy = 0;


    int n = 10;
    for (int i = 0; i < 360; i += n) {

        if ((static_cast<int>(x*_size) < static_cast<int>(_size)) &&
        ((static_cast<int>(x*_size) >= 0) &&
        (static_cast<int>(y*_size) < static_cast<int>(_size)) &&
        ((static_cast<int>(y*_size) >= 0))))
        {
            matrix[static_cast<int>(y*_size)][static_cast<int>(x*_size)] = _symbol;
        }

        x += vx*t;
        y += vy*t;

        vx = vx*cos(n * M_PI/180) - vy*sin(n * M_PI/180);
        vy = +vx*sin(n * M_PI/180) + vy*cos(n * M_PI/180);
        vx /= sqrt(vx*vx + vy*vy);
        vy /= sqrt(vx*vx + vy*vy);
    }

    printMatrix();
}
