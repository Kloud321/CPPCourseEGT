//
// Created by damya on 16.2.2024 г..
//

#include "Shape.h"

Shape::Shape(const string &color) : color(color) {

}

void Shape::draw() {

    cout << "The color of the shape is " << color << endl;
}
