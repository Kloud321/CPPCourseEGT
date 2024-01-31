//
// Created by damya on 16.1.2024 г..
//

#include "Circle.h"
#include "TwoDimensionalShape.h"
#include <iostream>
using namespace std;


Circle::Circle(int size, int position, string shape, char character, double radius)
: TwoDimensionalShape(size, position, shape, character){

    setRadius(radius);
}

void Circle::print() {

    cout << "This is a Circle Shape" << endl;

}

void Circle::setRadius(double radius) {

    this->radius=radius;

}

double Circle::getRadius() {
    return radius;
}
double Circle::getArea() {

    return 3.14159 * radius * radius;
}