#ifndef OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_CIRCLE_H
#define OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_CIRCLE_H

#include "Shape.h"
#include "TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape{
public:
    Circle(int, int, string, char, double);
    virtual void print() override;
    virtual double getArea() override;
    void setRadius(double);
    double getRadius();  // Corrected the function name



private:
    double radius;


};

#endif //OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_CIRCLE_H
