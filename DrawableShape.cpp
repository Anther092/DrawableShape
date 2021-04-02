//
// Created by Bogdan on 02/04/2021.
//

#include <iostream>
#include "DrawableShape.h"

DrawableShape::DrawableShape(unsigned int size, unsigned char symbol, unsigned char backgroundSymbol) :
    _size(size),
    _symbol(symbol),
    _backSymbol(backgroundSymbol)
{
    resizeMatrix();
}

void DrawableShape::fillMatrix() {

    for (int i = 0; i < _size; ++i) {
        for (int j = 0; j < _size; ++j) {
            matrix[i][j] = _backSymbol;
        }
    }
}

void DrawableShape::setSize(unsigned int size) {

    _size = size;
    resizeMatrix();
}

void DrawableShape::setSymbol(unsigned char sym) {
    _symbol = sym;
}

void DrawableShape::setBackgroundSymbol(unsigned char bSym) {
    _backSymbol = bSym;
}

void DrawableShape::printMatrix() {
    for (int i = 0; i < _size; ++i) {
        for (int j = 0; j < _size; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void DrawableShape::resizeMatrix() {
    matrix.resize(_size);
    for (int i = 0; i < _size; ++i) {
        matrix[i].resize(_size);
    }
}
