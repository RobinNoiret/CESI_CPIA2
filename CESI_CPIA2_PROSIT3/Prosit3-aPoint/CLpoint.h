#ifndef CLPOINT_H
#define CLPOINT_H

class CLpoint {
protected:
    double x, y;

public:
    CLpoint(double x = 0.0, double y = 0.0);
    virtual void afficherCoordo() const;
    virtual ~CLpoint() {}
};

#endif