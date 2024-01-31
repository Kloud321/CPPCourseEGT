//
// Created by damya on 29.1.2024 г..
//

#ifndef INHERITANCEABSTRACTION_CIRCLE_H
#define INHERITANCEABSTRACTION_CIRCLE_H


#include <iostream>
#include "shape.h"
#include "math.h"

using namespace std;

class Circle : public shape{
public:
    Circle(int);
    virtual void draw() override;

private:

};




#endif //INHERITANCEABSTRACTION_CIRCLE_H
