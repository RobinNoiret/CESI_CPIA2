// _________________________--_________________ File and library links _________________--_________________________
#include "point.h"                                      // Linking with the class declaration file
#include <iostream>                                     // Include library for terminal communication
#include <iomanip>                                      // Include library to correct number precision          

// _________________________--______________________ Main programs ______________________--_________________________
int main() {

    // ________________________________________________ Hypothesis ________________________________________________
    float userHypothesis;

    std::cout << "Enter your hypothesis for the distance between the two points: ";
    std::cin >> userHypothesis;

    // _____________________________________________ Point placement ______________________________________________
    float x1, y1, x2, y2;

    std::cout << "Enter the coordinates of the first point (x y): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter the coordinates of the second point (x y): ";
    std::cin >> x2 >> y2;

    Point point1(x1, y1);
    Point point2(x2, y2);

    std::cout << "Coordinates of the first point: (" << point1.getX() << ", " << point1.getY() << ")\n";
    std::cout << "Coordinates of the second point: (" << point2.getX() << ", " << point2.getY() << ")\n";

    // ________________________________________ Distance calculation __________________________________________
    float distance = point1.distanceTo(point2);

    std::cout << std::fixed << std::setprecision(1) << "Distance between the two points: " << distance << std::endl;

    //  _______________________________________ Hypothesis validation _________________________________________
    if (userHypothesis == distance) {
        std::cout << "Your hypothesis is correct! The calculated distance matches your hypothesis. \n" << std::endl;
    }
    else {
        std::cout << "Your hypothesis is incorrect. The calculated distance is different from your hypothesis.`\n" << std::endl;
    }

    //  __________________________________________ Moving points ______________________________________________
    float deltaX1, deltaY1, deltaX2, deltaY2;

    std::cout << "Enter the displacement in x and y for the first point: ";
    std::cin >> deltaX1 >> deltaY1;

    std::cout << "Enter the displacement in x and y for the second point: ";
    std::cin >> deltaX2 >> deltaY2;

    point1.translate(deltaX1, deltaY1);
    point2.translate(deltaX2, deltaY2);

    std::cout << "New coordinates of the first point: (" << point1.getX() << ", " << point1.getY() << ")\n";
    std::cout << "New coordinates of the second point: (" << point2.getX() << ", " << point2.getY() << ")\n";

    return 0;
}