#include <iostream>
#include "Figures/Rectangle.h"
#include "Figures/Circle.h"

int main() {

    DrawableShape *r = new Circle(15, '@', '.', 5);
    r->draw();

    return 0;
}
