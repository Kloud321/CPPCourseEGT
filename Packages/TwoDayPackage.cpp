// OverNightPackage.cpp

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(double price, double weight, Adress adressSender, Adress adressReciever, double additionalFee)
        : Package(price, weight, adressSender, adressReciever) {
    setAdditionalFee(additionalFee);
}

void TwoDayPackage::setAdditionalFee(double additionalFee) {
    this->addtionalFee = additionalFee;
}

double TwoDayPackage::getAdditionalFee() {
    return addtionalFee;
}

double TwoDayPackage::calculatePrice() {

    return getPrice() * getWeight() + getAdditionalFee();
}
