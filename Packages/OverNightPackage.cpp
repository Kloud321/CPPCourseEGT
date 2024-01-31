// OverNightPackage.cpp

#include "OverNightPackage.h"

OverNightPackage::OverNightPackage(double price, double weight, Adress adressSender, Adress adressReciever, double additionalFee)
        : Package(price, weight, adressSender, adressReciever), additionalFee(additionalFee) {
}

void OverNightPackage::setAdditionalFee(double additionalFee) {
    this->additionalFee = additionalFee;
}

double OverNightPackage::getAdditionalFee() {
    return additionalFee;
}

double OverNightPackage::calculatePrice() {

    return getPrice() * getWeight() + getAdditionalFee();
}