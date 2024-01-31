//
// Created by damya on 17.1.2024 г..
//

#include "Package.h"
#include <iostream>

Package::Package(double price, double weight, Adress adressSender, Adress adressReciever) :
price(price), weight(weight), adressSender(adressSender), adressReciever(adressReciever) {


}


void Package::setPrice(double price) {
    this->price = price;
}

double Package::getPrice() {
    return price;
}

void Package::setWeight(double weight) {
    this->weight = weight;
}

double Package::getWeight() {
    return weight;
}


void Package::printInfo() {

    this->adressReciever.printInfo();
    this->adressSender.printInfo();
    cout << this->getPrice() << " "  << this->getWeight() << endl;

}


double Package::calculatePrice() {

    return getPrice() * getWeight();
}



double Package::calculateTotalSumForPackages(const vector<Package *> &packages) {
        double totalSum = 0.0;

        for (Package* packagePtr : packages) {
            // Assuming that each Package has a method called calculatePrice()
            totalSum += packagePtr->calculatePrice();
        }

        return totalSum;
    }