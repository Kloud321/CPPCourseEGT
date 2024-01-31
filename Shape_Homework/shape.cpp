//
// Created by damya on 29.1.2024 г..
//

#include "shape.h"

shape::shape(int size) : size(size) {}

int shape::getSize() const {
    return size;
}

void shape::setSize(int size) {
    shape::size = size;
}

