//
// Created by damya on 16.2.2024 г..
//

#include "Rectangle.h"

Rectangle::Rectangle(const string color, double height, double width) : Shape(color), height(height), width(width) {

}

void Rectangle::draw() {

    cout << "The color of the triangle is " << color << endl;

}

double Rectangle::area() {
    return width * height;
}