#include "CLpoint.h"
#include <iostream>

CLpoint::CLpoint(double x, double y) : x(x), y(y) {}

void CLpoint::afficherCoordo() const {
    std::cout << "Point: (" << x << ", " << y << ")" << std::endl;
}
