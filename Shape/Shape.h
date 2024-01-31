//
// Created by damya on 16.1.2024 г..
//

#ifndef OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_SHAPE_H
#define OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_SHAPE_H


class Shape {

public:
    Shape(int);

    virtual void print();
    virtual double getArea() = 0;
    void setA(int);
    int getA();

private:
    int size;
};



#endif //OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_SHAPE_H
