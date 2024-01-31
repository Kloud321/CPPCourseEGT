//
// Created by damya on 19.1.2024 г..
//

#ifndef RENTCARTASKINHERITANCE_FAMILYCAR_H
#define RENTCARTASKINHERITANCE_FAMILYCAR_H


#include "Car.h"

class FamilyCar:public Car{
public:
    FamilyCar(string,  string, string, string , int , int , double, double );

    virtual double getTraveledDistance();
    virtual double getTax();
    virtual void printInfo() override;
    virtual double cost() override;

private:
    double taxPerDay;
    double distanceTraveled;

};


#endif //RENTCARTASKINHERITANCE_FAMILYCAR_H
