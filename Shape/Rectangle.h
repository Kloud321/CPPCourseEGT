//
// Created by damya on 17.1.2024 г..
//

#ifndef OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_RECTANGLE_H
#define OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_RECTANGLE_H

#include "TwoDimensionalShape.h"

using namespace std;
#include <string>
class Rectangle: public TwoDimensionalShape{
public:
    Rectangle(int, int, string, char, double, double );
    virtual void print() override;
    virtual double getArea() override;
    void setRadius(double);
    double getRadius() const;  // Corrected the function name



private:
    double radius;
    double SideB;
};


#endif //OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_RECTANGLE_H
