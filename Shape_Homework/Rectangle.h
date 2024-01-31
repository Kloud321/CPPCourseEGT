//
// Created by damya on 29.1.2024 г..
//

#ifndef INHERITANCEABSTRACTION_RECTANGLE_H
#define INHERITANCEABSTRACTION_RECTANGLE_H
#include <iostream>
#include "shape.h"
using namespace std;

class Rectangle : public shape{

public:
    Rectangle(int);
    virtual void draw() override;

private:

};


#endif //INHERITANCEABSTRACTION_RECTANGLE_H
