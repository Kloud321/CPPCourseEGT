//
// Created by damya on 16.2.2024 г..
//

#ifndef CODINGTASKS_INHERITANCE_HOMEWORK_SHAPE_H
#define CODINGTASKS_INHERITANCE_HOMEWORK_SHAPE_H

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Shape {
protected:
    string color;

public:
    explicit Shape(const string &color);
    virtual double area() = 0;
    virtual void draw() = 0;
    virtual ~Shape();
};


#endif //CODINGTASKS_INHERITANCE_HOMEWORK_SHAPE_H
