//
// Created by damya on 16.1.2024 г..
//

#ifndef OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_THREEDEMENSIONALSHAPE_H
#define OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_THREEDEMENSIONALSHAPE_H
#include "Shape.h"

class ThreeDimensionalShape : public Shape {

public:

    ThreeDimensionalShape(int, int);
    virtual void print();
    virtual double getArea();
    double getVolume();
    void setH(int);
    int getH();

private:
    int h; // we add another variable
};


#endif //OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_THREEDEMENSIONALSHAPE_H
