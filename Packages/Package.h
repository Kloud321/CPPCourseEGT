//
// Created by damya on 17.1.2024 г..
//

#ifndef PACAGE_INHERITANCE_PACKAGE_H
#define PACAGE_INHERITANCE_PACKAGE_H

#include <string>
#include "Adress.h"
#include <vector>

using namespace std;


class Package {
public:
    Package(double, double, Adress, Adress);
    void setPrice(double);
    double getPrice();
    void setWeight(double);
    double getWeight();
    void printInfo();
    virtual double calculatePrice();
    static double calculateTotalSumForPackages(const vector<Package *> &packages);


private:
    double price;
    double weight;
    Adress adressSender;
    Adress adressReciever;

};


#endif //PACAGE_INHERITANCE_PACKAGE_H
