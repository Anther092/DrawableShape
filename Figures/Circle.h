//
// Created by Bogdan on 02/04/2021.
//

#ifndef DRAWSHAPES_CIRCLE_H
#define DRAWSHAPES_CIRCLE_H

#include "../DrawableShape.h"

class Circle : public DrawableShape {
private:
    unsigned int _r;
public:
    Circle(unsigned int size, unsigned char symbol, unsigned char backgroundSymbol, unsigned int r);
    void draw() override;
};


#endif //DRAWSHAPES_CIRCLE_H
