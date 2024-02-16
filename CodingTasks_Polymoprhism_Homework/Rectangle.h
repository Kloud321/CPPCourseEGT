//
// Created by damya on 16.2.2024 г..
//

#ifndef CODINGTASKS_INHERITANCE_HOMEWORK_RECTANGLE_H
#define CODINGTASKS_INHERITANCE_HOMEWORK_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{
public:
    Rectangle(const string,double, double);
    double virtual area() override;
    void virtual draw() override;

private:
    double height;
    double width;
};


#endif //CODINGTASKS_INHERITANCE_HOMEWORK_RECTANGLE_H
