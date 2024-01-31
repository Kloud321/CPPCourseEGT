//
// Created by damya on 19.1.2024 г..
//

#include "Car.h"

Car::Car(string marke,  string model,  string type,  string color, int indentification,
         int plateNumber): marke(marke), model(model), type(type), color(color), indentification(indentification),
         plateNumber(plateNumber) {}

 string Car::getMarke() {
    return marke;
}

void Car::setMarke( string marke) {
    Car::marke = marke;
}

 string Car::getModel()  {
    return model;
}

void Car::setModel(string model) {
    Car::model = model;
}

 string Car::getType()  {
    return type;
}

void Car::setType( string type) {
    Car::type = type;
}

 string Car::getColor()  {
    return color;
}

void Car::setColor( string color) {
    Car::color = color;
}

int Car::getIndentification()  {
    return indentification;
}

void Car::setIndentification(int indentification) {
    Car::indentification = indentification;
}

int Car::getPlateNumber()  {
    return plateNumber;
}

void Car::setPlateNumber(int plateNumber) {
    Car::plateNumber = plateNumber;
}

double Car::getTax() {
    // Provide a default implementation for getTax
    return 0.0;
}

double Car::getTraveledDistance(){
    // Provide a default implementation for getTax
    return 0.0;
}

double Car::cost() {

    return 0.0;
}

void Car::printInfo() {
    cout << "Marke: " << marke << endl;
    cout << "Model: " << model << endl;
    cout << "Type: " << type << endl;
    cout << "Color: " << indentification << endl;
    cout << "Plate Number: " << plateNumber << endl;
}


