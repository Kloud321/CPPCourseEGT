//
// Created by damya on 22.1.2024 г..
//

#include "Drinks.h"

Drinks::Drinks( string name,  double price,  int quantity,  TypeEnum alcoholicType) : name(
        name), price(price), quantity(quantity), alcoholicType(alcoholicType) {}

 string Drinks::getName()  {
    return name;
}

void Drinks::setName(const string name) {
    Drinks::name = name;
}

double Drinks::getPrice()  {
    return price;
}

void Drinks::setPrice( double price) {
    Drinks::price = price;
}

int Drinks::getQuantity()  {
    return quantity;
}

void Drinks::setQuantity( int quantity) {
    Drinks::quantity = quantity;
}

TypeEnum Drinks::getAlcoholicType()  {
    return alcoholicType;
}

void Drinks::setAlcoholicType( TypeEnum alcoholicType) {
    Drinks::alcoholicType = alcoholicType;
}

void Drinks::printInfo() {
    cout << "Drink name: " << this->name << endl;
    cout << "Price: " << this->price << endl;
    cout << "Quantity: " << this->quantity << endl;
    cout << "Alcohol type: " <<  TypeEnum::genreTypeToString(this->alcoholicType.getAlcoholType()) << endl;
    cout << endl;
}