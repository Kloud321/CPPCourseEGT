//
// Created by damya on 4.2.2024 г..
//

#ifndef CAR_PERSONAL_PREPARATION_RECTANGLE_H
#define CAR_PERSONAL_PREPARATION_RECTANGLE_H

using namespace std;
#include <iostream>

class Rectangle {
public:

    Rectangle(double , double);

    double getHeight() const;

    void setHeight(double height);

    double getWitdth() const;

    void setWitdth(double witdth);

    double getArea() const;

    void displayInfo() const;

    bool operator>(const Rectangle& other) const;
    bool operator<(const Rectangle& other) const;
    bool operator==(const Rectangle& other) const;


private:
    double height;
    double width;
};


#endif //CAR_PERSONAL_PREPARATION_RECTANGLE_H
