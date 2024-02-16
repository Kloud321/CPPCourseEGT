//
// Created by damya on 16.2.2024 г..
//


#include "Circle.h"
#include "Rectangle.h"


void printArea(Shape* currentShape ){

    cout << "Area of the shape is: " << currentShape->area() << endl;
    cout << endl;
}

int main() {

    // Creating circle instance, calling its draw method and printArea();
    Circle circle("Blue", 3);
    circle.draw();
    printArea((& circle));

    // Creating rectangle instance, calling its draw method and printArea();
    Rectangle rectangle("Green", 9, 5.8);
    rectangle.draw();

    printArea((& rectangle));


    return 0;
}