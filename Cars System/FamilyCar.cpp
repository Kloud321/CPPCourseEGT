//
// Created by damya on 19.1.2024 г..
//

#include "FamilyCar.h"

FamilyCar::FamilyCar(string marke,  string model,  string type,  string color, int indentification, int plateNumber,
                     double taxPerDay, double distanceTraveled)
: Car(marke, model, type, color, indentification, plateNumber) {

    this->taxPerDay=taxPerDay;
    this->distanceTraveled=distanceTraveled;
}


double FamilyCar::getTraveledDistance() {

    if(distanceTraveled < 500){
        return 0.7;
    }
    return 0.4;
}

double FamilyCar::getTax() {
    return taxPerDay;
}


double FamilyCar::cost() {

    return taxPerDay * getTraveledDistance();
}

void FamilyCar::printInfo() {

    Car::printInfo();
    cout << "Tax per Day: " << this->taxPerDay << endl;
    cout << "Distance Traveled: " << this->distanceTraveled << endl;

    cout<<endl;
}
