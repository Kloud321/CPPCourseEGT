//
// Created by damya on 22.1.2024 г..
//

#include "Alcoholic.h"

Alcoholic::Alcoholic(const string &name, const double &price, const int &quantity, const TypeEnum &alcoholicType,
                     double alcoholContent, double taxes) : Drinks(name, price, quantity, alcoholicType),
                                                            alcoholContent(alcoholContent), taxes(taxes) {}


double Alcoholic::calculatePrice() {
    return getQuantity() * getPrice() + (getQuantity() * getPrice() * taxes);
}


void Alcoholic::printInfo() {
    Drinks::printInfo();
    cout << "Alcohol Content: " << alcoholContent << "%" << endl;
    cout << "Taxes: " << taxes << endl;
}

