//
// Created by damya on 22.1.2024 г..
//

#ifndef ONLINESHOPPOLYMORPHISAMABSTRACTION_ALCOHOLIC_H
#define ONLINESHOPPOLYMORPHISAMABSTRACTION_ALCOHOLIC_H

#include "Drinks.h"


class Alcoholic : public Drinks {
public:
    Alcoholic(const string &name, const double &price, const int &quantity, const TypeEnum &alcoholicType,
              double alcoholContent, double taxes);

    virtual double calculatePrice() override;
    virtual void printInfo() override;

private:
    double alcoholContent;
    double taxes;
};


#endif //ONLINESHOPPOLYMORPHISAMABSTRACTION_ALCOHOLIC_H
