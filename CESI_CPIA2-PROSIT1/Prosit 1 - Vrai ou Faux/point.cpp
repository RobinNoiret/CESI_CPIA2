// __________________________________________ File and library links __________________________________________
#include "point.h"                                      // Linking with the class declaration file
#include <cmath>                                        // Including the library for square

// ____________________--_______________ Method declarations and accessors _____________--______________________

// __________ Builders __________
Point::Point() : x(0), y(0) {}                                      // Default constructor initializes x and y to 0
Point::Point(float xCoord, float yCoord) : x(xCoord), y(yCoord) {}  // Constructor with specified coordinates

// __________ Methods ___________
void Point::setCoordinates(float xCoord, float yCoord) {            // Method for set coordinates
    x = xCoord;                                                         // Set x to user coordinate on X
    y = yCoord;                                                         // Set y to user coordinate on Y
}

void Point::translate(float deltaX, float deltaY) {                 // Method to translate points with displacement vector
    x += deltaX;                                                        // Move the point x by adding the deltaX entered by the user
    y += deltaY;                                                        // Move the point y by adding the deltaY entered by the user
}

float Point::distanceTo(const Point& otherPoint) const {            // Method to calcul the distance between 2 points
    float dx = x - otherPoint.x;                                        // Calculate the difference in x - coordinates
    float dy = y - otherPoint.y;                                        // Calculate the difference in y - coordinates
    return sqrt(dx * dx + dy * dy);                                     // Calculate and return the distance
}

// _________ Accessors __________
float Point::getX() const {                                         // Accessor get for X
    return x;                                                           // return x
}

float Point::getY() const {                                         // Accessor get for Y
    return y;                                                           // return y
}