//
// Created by damya on 29.1.2024 г..
//

#include "Rectangle.h"
#include "Circle.h"
#include <vector>

int main(){
    vector<shape *> shapes;

    Circle *c1 = new Circle(10);
    Rectangle *r1 = new Rectangle(6);
    shapes.push_back(c1);
    shapes.push_back(r1);

    for(shape *shape : shapes){
        shape->draw();
        cout << endl;
    }

    for (shape *s : shapes) {
        delete s;
    }

    return 0;
}