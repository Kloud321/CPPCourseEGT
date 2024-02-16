//
// Created by damya on 16.2.2024 г..
//

#include "Circle.h"

Circle::Circle(const string &color) : Shape(color) {}


void Circle::draw() {
    cout << "The color of the circle is " << color << endl;
}