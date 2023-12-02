#include "CLparcours3D.h"
#include <iostream>
#include <cmath>

CLparcours3D::CLparcours3D(int capacite) {
    // Initialisation du parcours avec une capacité donnée (si nécessaire)
}

void CLparcours3D::ajouterPoint(CLpoint* point) {
    CLpoint3D* point3D = dynamic_cast<CLpoint3D*>(point);
    if (point3D) {
        points.push_back(point3D);
    }
}

double CLparcours3D::calculDistance() const {
    double distance = 0.0;
    for (size_t i = 1; i < points.size(); ++i) {
        CLpoint3D* pt1 = dynamic_cast<CLpoint3D*>(points[i - 1]);
        CLpoint3D* pt2 = dynamic_cast<CLpoint3D*>(points[i]);
        if (pt1 && pt2) {
            distance += pt1->calculDistance(*pt2);
        }
    }
    return distance;
}

void CLparcours3D::message() const {
    std::cout << "salut";
}