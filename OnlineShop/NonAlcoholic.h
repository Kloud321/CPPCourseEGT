//
// Created by damya on 22.1.2024 г..
//

#ifndef ONLINESHOPPOLYMORPHISAMABSTRACTION_NONALCOHOLIC_H
#define ONLINESHOPPOLYMORPHISAMABSTRACTION_NONALCOHOLIC_H

#include "Drinks.h"

class NonAlcoholic : public Drinks {
public:
    NonAlcoholic(const string &name, const double &price, const int &quantity, const TypeEnum &alcoholicType,
                 double liters, double cityTax);

    virtual double calculatePrice() override;
    virtual void printInfo() override;

private:
    double liters;
    double cityTax;
};


#endif //ONLINESHOPPOLYMORPHISAMABSTRACTION_NONALCOHOLIC_H
