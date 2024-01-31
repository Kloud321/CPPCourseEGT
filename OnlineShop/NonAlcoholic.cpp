//
// Created by damya on 22.1.2024 г..
//

#include "NonAlcoholic.h"

NonAlcoholic::NonAlcoholic(const string &name, const double &price, const int &quantity, const TypeEnum &alcoholicType,
                           double liters, double cityTax) : Drinks(name, price, quantity, alcoholicType),
                                                            liters(liters), cityTax(cityTax) {}


double NonAlcoholic::calculatePrice() {

    return (getQuantity() * getPrice()) + cityTax;

}

void NonAlcoholic::printInfo() {
    Drinks::printInfo();
    cout << "Liters: " << liters << "l" << endl;
    cout << "City Tax: " << cityTax << endl;
}