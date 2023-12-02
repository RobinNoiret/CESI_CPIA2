#include "CLParcours.h"

CLParcours::~CLParcours() {
    for (CLpoint* point : points) {
        delete point;
    }
}