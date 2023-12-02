#include "CLpoint3D.h"
#include <iostream>

CLpoint3D::CLpoint3D(double x, double y, double z) : CLpoint(x, y), z(z) {}

void CLpoint3D::afficherCoordo() const {
    std::cout << "Point 3D: (" << x << ", " << y << ", " << z << ")" << std::endl;
}