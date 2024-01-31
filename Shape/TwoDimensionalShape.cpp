#include "TwoDimensionalShape.h"
#include <iostream>

using namespace std;

TwoDimensionalShape::TwoDimensionalShape(int size, int position, string shape, char character) : Shape(size) {
    setPosition(position);
    setShape(shape);
    setChar(character);
}

void TwoDimensionalShape::setPosition(int position) {

    this->position = position;
}

int TwoDimensionalShape::getPosition() {
    return position;
}

void TwoDimensionalShape::setShape(string shape) {
    this->shape = shape;
}

string TwoDimensionalShape::getShape() {
    return shape;
}

void TwoDimensionalShape::setChar(char character) {
    this->character = character;
}

char TwoDimensionalShape::getChar() {
    return character;
}

void TwoDimensionalShape::print() {
    cout << "We are in two-dimensional shape" << endl;
}

double TwoDimensionalShape::getArea() {
    cout << "This is 2D shape area" << endl;
    return 10.0;
}
