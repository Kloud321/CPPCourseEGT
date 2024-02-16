//
// Created by damya on 16.2.2024 г..
//


#include "Circle.h"
#include "Rectangle.h"

int main() {

    // Creating shape instance and calling its draw method
    Shape shape("Red");
    shape.draw();

    // Creating circle instance and calling its draw method
    Circle circle("Blue");
    circle.draw();

    // Creating rectangle instance and calling its draw method
    Rectangle rectangle("Green");
    rectangle.draw();


    return 0;
}