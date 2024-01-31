#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape(int size) {
    this->size = size;
}

void Shape::setA(int size) {
    this->size = size;
}

int Shape::getA() {
    return this->size;
}


void Shape::print() {
    std::cout << " " << std::endl;
}

double Shape::getArea() {

    return 0.0;
}