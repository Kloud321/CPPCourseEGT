//
// Created by damya on 16.2.2024 г..
//

#ifndef CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H
#define CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H

#include "Shape.h"
class Circle: public Shape {
public:
    Circle(const string, double );
    double virtual area() override;
    void virtual draw() override;

private:
    static const double PI;
    double radius;
};


#endif //CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H
