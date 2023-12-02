#ifndef CLPARCOURS_H
#define CLPARCOURS_H

#include "CLpoint.h"
#include <vector>

class CLParcours {
protected:
    std::vector<CLpoint*> points;

public:
    virtual void ajouterPoint(CLpoint* point) = 0;
    virtual double calculDistance() const = 0;
    virtual void message() const = 0;
    virtual ~CLParcours();
};

#endif