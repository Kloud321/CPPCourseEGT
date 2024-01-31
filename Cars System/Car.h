//
// Created by damya on 19.1.2024 г..
//

#ifndef RENTCARTASKINHERITANCE_CAR_H
#define RENTCARTASKINHERITANCE_CAR_H
#include <string>
#include <iostream>
using namespace std;



class Car {
public:
    Car(string, string,  string,  string, int, int);

    string getMarke();
    void setMarke(string marke);

    string getModel();

    void setModel(string model);

    string getType();

    void setType(string type);

    string getColor();

    void setColor( string color);

    int getIndentification();

    void setIndentification(int indentification);

    int getPlateNumber();

    void setPlateNumber(int plateNumber);

    virtual double getTax();

    virtual double getTraveledDistance();

    virtual void printInfo();

    virtual double cost();

public:
private:
    string marke;
    string model;
    string type;
    string color;
    int indentification;
    int plateNumber;

};


#endif //RENTCARTASKINHERITANCE_CAR_H
