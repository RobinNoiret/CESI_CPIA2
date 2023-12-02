#include "CLparcours2D.h"
#include <iostream>
#include <cmath>

CLparcours2D::CLparcours2D(int capacite) {
    // Initialisation du parcours avec une capacité donnée (si nécessaire)
}

void CLparcours2D::ajouterPoint(CLpoint* point) {
    points.push_back(point);
}

double CLparcours2D::calculDistance() const {
    double distance = 0.0;
    for (size_t i = 1; i < points.size(); ++i) {
        CLpoint* pt1 = points[i - 1];
        CLpoint* pt2 = points[i];
        if (pt1 && pt2) {
            distance += pt1->calculDistance(*pt2);
        }
    }
    return distance;
}

void CLparcours2D::message() const {
    std::cout << "Parcours 2D" << std::endl;
}