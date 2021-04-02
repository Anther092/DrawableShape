//
// Created by Bogdan on 02/04/2021.
//

#include <iostream>
#include "Rectangle.h"

void Rectangle::draw() {

    fillMatrix();
    double rCenter = 0.5;
    double rA = static_cast<double>(_a) / _size;

    double x = rCenter - rA/2.;
    double y = rCenter - rA/2.;

    for (unsigned int i = 0; i < _a; ++i) {
        matrix[y*_size][x*_size] = _symbol;
        x += 1./_size;
    }
    x -= 1./_size;

    for (int i = 0; i < _a; ++i) {
        matrix[y*_size][x*_size] = _symbol;
        y += 1./_size;
    }
    y -= 1./_size;

    for (int i = 0; i < _a; ++i) {
        matrix[y*_size][x*_size] = _symbol;
        x -= 1./_size;
    }
    x += 1./_size;

    for (int i = 0; i < _a; ++i) {
        matrix[y*_size][x*_size] = _symbol;
        y -= 1./_size;
    }

    printMatrix();
}

Rectangle::Rectangle(unsigned int size, unsigned char symbol, unsigned char backgroundSymbol, unsigned int a) :
DrawableShape(size, symbol, backgroundSymbol),
_a(a) {}
