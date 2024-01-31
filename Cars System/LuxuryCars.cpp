//
// Created by damya on 19.1.2024 г..
//

#include "LuxuryCars.h"

LuxuryCars::LuxuryCars( string marke, const string model,  string type,  string color,
                       int indentification, int plateNumber, double taxPerDay, int distanceTraveled,
                       double additionalTax) : Car(marke, model, type, color, indentification, plateNumber),
                                              taxPerDay(taxPerDay), distanceTraveled(distanceTraveled),
                                               additionalTax(additionalTax) {
}

void LuxuryCars::setTaxPerDay(double taxPerDay) {
    LuxuryCars::taxPerDay = taxPerDay;
}
double LuxuryCars::getTaxPerDay()  {
    return taxPerDay;
}

void LuxuryCars::setDistanceTraveled(int distanceTraveled) {
    LuxuryCars::distanceTraveled = distanceTraveled;
}

int LuxuryCars::getDistanceTraveled()  {
    return distanceTraveled;
}

double LuxuryCars::getAdditionalTax()  {
    return additionalTax;
}

void LuxuryCars::setAdditionalTax(double additionalTax) {
    LuxuryCars::additionalTax = additionalTax;
}

string LuxuryCars::getProduct() {
    return product;
}

void LuxuryCars::chooseProduct(int choice) {
    switch (choice) {
        case 1:
            product = "Champagne";
            break;
        case 2:
            product = "Wine";
            break;
        case 3:
            product = "Chocolate";
            break;
        default:
            cerr << "Invalid choice. Product not set." << endl;
    }
}


double LuxuryCars::getCoeficiant()  {
    if (distanceTraveled < 200){
        return (0.6);
    }
    return 0.4;
}

int LuxuryCars::getProdcutCost() {
    if (product.empty()) {
        cerr << "Product not chosen. Cost calculation is not valid." << endl;
        return -1; // or handle it differently based on your needs
    }
    double productCost = 0.0;
    if (product == "Champagne") {
        productCost = 100.0;
    } else if (product == "Wine") {
        productCost = 50.0;
    } else if (product == "Chocolate") {
        productCost = 40.0;
    }
    return productCost;
}


double LuxuryCars::cost() {

    return taxPerDay * getCoeficiant() * getProdcutCost();
}

void LuxuryCars::printInfo() {

    Car::printInfo();
    cout << "Tax per Day: " << this->taxPerDay << endl;
    cout << "Distance Traveled: " << this->distanceTraveled << endl;
    cout << "Pr: " << this->additionalTax << endl;

    cout<<endl;
}



