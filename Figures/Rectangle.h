//
// Created by Bogdan on 02/04/2021.
//

#ifndef DRAWSHAPES_RECTANGLE_H
#define DRAWSHAPES_RECTANGLE_H

#include "../DrawableShape.h"

class Rectangle : public DrawableShape {
private:
    unsigned int _a;
public:
    Rectangle(unsigned int size, unsigned char symbol, unsigned char backgroundSymbol, unsigned int a);
    void draw() override;
};

#endif //DRAWSHAPES_RECTANGLE_H
