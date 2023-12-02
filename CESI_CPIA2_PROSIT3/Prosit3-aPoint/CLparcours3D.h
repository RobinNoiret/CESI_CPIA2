#ifndef CLPARCOURS3D_H
#define CLPARCOURS3D_H

#include "CLParcours.h"
#include "CLpoint3D.h"

class CLparcours3D : public CLParcours {
public:
    CLparcours3D(int capacite);
    void ajouterPoint(CLpoint* point) override;
    double calculDistance() const override;
    void message() const override;
};

#endif