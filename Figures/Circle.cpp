//
// Created by Bogdan on 02/04/2021.
//

#include "Circle.h"

Circle::Circle(unsigned int size, unsigned char symbol, unsigned char backgroundSymbol, unsigned int r) :
        DrawableShape(size, symbol, backgroundSymbol),
        _r(r) {}

void Circle::draw() {

    fillMatrix();
    double rCenter = 0.5;
    double rA = static_cast<double>(_r) / _size;

    double x = rCenter - rA/2.;
    double y = rCenter - rA/2.;

    double t = 1./_size;
    double vx = 0.5;
    double vy = 1;


    for (int i = 0; i < _r; ++i) {
        matrix[y*_size][x*_size] = _symbol;
        y += vy*t;
        x += vx*t;
    }



    printMatrix();
}
