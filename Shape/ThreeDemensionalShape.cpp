#include "Shape.h"
#include "ThreeDemensionalShape.h"
#include <iostream>

using namespace std;

ThreeDimensionalShape::ThreeDimensionalShape(int a, int h) : Shape(a) {
    this->h = h;
}

void ThreeDimensionalShape::print() {
    cout << "We are in three-dimensional shape" << endl;
}

double ThreeDimensionalShape::getArea() {
    cout << "This is 3d shape area" << endl;
    return 0.0;
}

double ThreeDimensionalShape::getVolume() {
    cout << "In 3D getVolume" << endl;
    return 0.0;
}
