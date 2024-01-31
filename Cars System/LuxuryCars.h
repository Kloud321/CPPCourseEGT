//
// Created by damya on 19.1.2024 г..
//

#ifndef RENTCARTASKINHERITANCE_LUXURYCARS_H
#define RENTCARTASKINHERITANCE_LUXURYCARS_H
#include "Car.h"

class LuxuryCars :public Car{
public:
    LuxuryCars(string,  string,  string,  string, int, int, double, int, double);


    void setTaxPerDay(double);
    double getTaxPerDay() ;

    void setDistanceTraveled(int);
    int getDistanceTraveled();

    double getCoeficiant();


    string getProduct();
    void chooseProduct(int);
    int getProdcutCost();

    double cost() override;
    void printInfo() override;

    double getAdditionalTax();
    void setAdditionalTax(double);


private:
    double taxPerDay;
    int distanceTraveled;
    double additionalTax;
    string product;

};


#endif //RENTCARTASKINHERITANCE_LUXURYCARS_H
