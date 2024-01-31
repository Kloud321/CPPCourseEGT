//
// Created by damya on 28.1.2024 г..
//

#ifndef OPERATOROVERLOADING_BOX_H
#define OPERATOROVERLOADING_BOX_H

#include <iostream>

class Box {
private:
    double width;
    double length;
    double height;

public:
    // Constructor
    Box(double w = 0.0, double l = 0.0, double h = 0.0);

    // Set methods
    void setWidth(double w);
    void setLength(double l);
    void setHeight(double h);

    // Get methods
    double getWidth() const;
    double getLength() const;
    double getHeight() const;

    // Overload + operator
    Box operator+(const Box& other) const;

    // Friend function for output stream
    friend std::ostream& operator<<(std::ostream& os, const Box& box);
};


#endif //OPERATOROVERLOADING_BOX_H
