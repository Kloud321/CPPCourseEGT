//
// Created by damya on 4.2.2024 г..
//

#include "Rectangle.h"



Rectangle::Rectangle(double height, double width) : height(height), width(width) {}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double height) {
    Rectangle::height = height;
}

double Rectangle::getWitdth() const {
    return width;
}

void Rectangle::setWitdth(double width) {
    Rectangle::width = width;
}


double Rectangle::getArea() const {

    return width * height;

}


void Rectangle::displayInfo() const {
    cout << "Rectangle Details:\n";
    cout << "Width: " << width << "\n";
    cout << "Height: " << height << "\n";
  cout << "Area: " << getArea() << "\n";
}

bool Rectangle::operator<(const Rectangle &other) const {

    return this->getArea() < other.getArea();
}

bool Rectangle::operator>(const Rectangle &other) const {

    return this->getArea() > other.getArea();
}

bool Rectangle::operator==(const Rectangle &other) const {

    return this->getArea() == other.getArea();
}

