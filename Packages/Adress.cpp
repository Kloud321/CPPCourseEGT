//
// Created by damya on 17.1.2024 г..
//

#include "Adress.h"
#include <iostream>

using namespace std;

Adress::Adress(string name, int phoneNumber, string city, string streetAdress)
 {
     setName(name);
     setPhone(phoneNumber);
     setCity(city);
     setStreetAdress(streetAdress);
}

void Adress::setName(std::string name) {
    this->name = name;
}

std::string Adress::getName() {
    return name;
}

void Adress::setPhone(int phoneNumber) {
    this->phoneNumber = phoneNumber;
}

int Adress::getPhone() {
    return phoneNumber;
}

void Adress::setCity(std::string city) {
    this->city = city;
}

std::string Adress::getCity()  {
    return city;
}

void Adress::setStreetAdress(std::string streetAdress) {
    this->streetAdress = streetAdress;
}

std::string Adress::getStreetAdress()  {
    return streetAdress;
}


void Adress::printInfo() {
    cout << "Name: "<< getName() << endl;
    cout << "Phone NUmber: " << getPhone() << endl;
    cout << "City: " << getCity() << endl;
    cout << "Street: " << getStreetAdress() << endl;
}