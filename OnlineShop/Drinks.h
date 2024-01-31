//
// Created by damya on 22.1.2024 г..
//

#ifndef ONLINESHOPPOLYMORPHISAMABSTRACTION_DRINKS_H
#define ONLINESHOPPOLYMORPHISAMABSTRACTION_DRINKS_H
#include <string>
#include "TypeEnum.h"
using namespace std;

class Drinks {
public:
    Drinks( string name,  double price, int quantity, const TypeEnum alcoholicType);


    string getName();

    void setName( string name);

    double getPrice() ;

    void setPrice(double price);

    int getQuantity() ;

    void setQuantity(int quantity);

    TypeEnum getAlcoholicType();

    void setAlcoholicType( TypeEnum alcoholicType);

    virtual void printInfo();
    virtual double calculatePrice() = 0;

private:
    string name;
    double price;
    int quantity;
    TypeEnum alcoholicType;

};


#endif //ONLINESHOPPOLYMORPHISAMABSTRACTION_DRINKS_H
