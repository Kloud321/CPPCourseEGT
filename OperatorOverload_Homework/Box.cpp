//
// Created by damya on 28.1.2024 г..
//

#include "Box.h"

// Constructor
Box::Box(double w, double l, double h) : width(w), length(l), height(h) {}

// Set methods
void Box::setWidth(double w) { width = w; }
void Box::setLength(double l) { length = l; }
void Box::setHeight(double h) { height = h; }

// Get methods
double Box::getWidth() const { return width; }
double Box::getLength() const { return length; }
double Box::getHeight() const { return height; }

// Overload + operator
Box Box::operator+(const Box& other) const {
    double newWidth = width > other.width ? width : other.width;
    double newLength = length + other.length;
    double newHeight = height > other.height ? height : other.height;

    return Box(newWidth, newLength, newHeight);
}

// Friend function for output stream
std::ostream& operator<<(std::ostream& os, const Box& box) {
    os << "Width: " << box.width << ", Length: " << box.length << ", Height: " << box.height;
    return os;
}
