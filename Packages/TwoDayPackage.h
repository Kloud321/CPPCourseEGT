//
// Created by damya on 17.1.2024 г..
//

#ifndef PACAGE_INHERITANCE_TWODAYPACKAGE_H
#define PACAGE_INHERITANCE_TWODAYPACKAGE_H
#include "Package.h"

class TwoDayPackage :public Package{

public:
    TwoDayPackage(double, double, Adress,  Adress, double);
    void setAdditionalFee(double);
    double getAdditionalFee();
    virtual double calculatePrice() override;
private:
    double addtionalFee;
};


#endif //PACAGE_INHERITANCE_TWODAYPACKAGE_H
