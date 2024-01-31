//
// Created by damya on 16.1.2024 г..
//

#ifndef OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_TWODIMENSIONALSHAPE_H
#define OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_TWODIMENSIONALSHAPE_H
#include "Shape.h"

using namespace std;
#include <string>


class TwoDimensionalShape : public Shape {
    public:
        TwoDimensionalShape(int, int, string, char);
        virtual void print() override;
        double getArea() override;
        void setPosition(int);
        int getPosition();
        void setShape(string);
        string getShape();
        void setChar(char);
        char getChar();
private:
    int position;
    string shape;
    char character;
};



#endif //OOP_POLYMORPHISAM_EXERCISE_2D_3D_SHAPES_TWODIMENSIONALSHAPE_H
