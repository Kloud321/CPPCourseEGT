//
// Created by damya on 16.2.2024 г..
//

#include "Circle.h"

const double Circle::PI= 3.14;

Circle::Circle(const string color, double radius) : Shape(color), radius(radius) {}

void Circle::draw() {
    cout << "The color of the circle is " << color << endl;
}

double Circle::area() {
   return radius * radius * PI;
}