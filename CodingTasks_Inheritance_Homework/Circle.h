//
// Created by damya on 16.2.2024 г..
//

#ifndef CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H
#define CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H

#include "Shape.h"
class Circle: public Shape {
public:
    Circle(const string &color);

    void draw();

};


#endif //CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H
