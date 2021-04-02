//
// Created by Bogdan on 02/04/2021.
//

#ifndef DRAWSHAPES_DRAWABLESHAPE_H
#define DRAWSHAPES_DRAWABLESHAPE_H

#include <vector>

class DrawableShape {
private:
    void resizeMatrix();
protected:
    unsigned int _size;
    unsigned char _symbol;
    unsigned char _backSymbol;

    std::vector<std::vector<unsigned char>> matrix;

    void fillMatrix();
    void printMatrix();
public:

    void setSize(unsigned int size);
    void setSymbol(unsigned char sym);
    void setBackgroundSymbol(unsigned char bSym);
    DrawableShape(unsigned int size, unsigned char symbol, unsigned char backgroundSymbol);
    virtual void draw() = 0;

};

#endif //DRAWSHAPES_DRAWABLESHAPE_H
