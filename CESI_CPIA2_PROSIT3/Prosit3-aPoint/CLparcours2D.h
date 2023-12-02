#ifndef CLPARCOURS2D_H
#define CLPARCOURS2D_H

#include "CLParcours.h"

class CLparcours2D : public CLParcours {
public:
    CLparcours2D(int capacite);
    void ajouterPoint(CLpoint* point) override;
    double calculDistance() const override;
    void message() const override;
};

#endif