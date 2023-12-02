#ifndef CLPOINT3D_H
#define CLPOINT3D_H

#include "CLpoint.h"

class CLpoint3D : public CLpoint {
private:
    double z;

public:
    CLpoint3D(double x = 0.0, double y = 0.0, double z = 0.0);
    void afficherCoordo() const override;
};

#endif