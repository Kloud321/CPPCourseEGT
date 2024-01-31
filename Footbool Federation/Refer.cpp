//
// Created by damya on 23.1.2024 г..
//

#include "Refer.h"

Refer::Refer(string username, string password, string firstName, string lastName, int years)
        : User(username, password), firstName(firstName), lastName(lastName), years(years) {}


string Refer::getFirstName()  {
    return firstName;
}

void Refer::setFirstName( string firstName) {
    Refer::firstName = firstName;
}

string Refer::getLastName() {
    return lastName;
}

void Refer::setLastName( string lastName) {
    Refer::lastName = lastName;
}

int Refer::getYears() {
    return years;
}

void Refer::setYears(int years) {
    Refer::years = years;
}


void Refer::printInfo() {
    cout << "-------Referee Info----------" << endl;
    cout << "Referee Name: " << this->getFirstName() << " " << this->getLastName() << endl;
    cout << "Referee age: " << this->getYears() << endl;
    cout << "----------------" << endl;
}

