//
// Created by damya on 10.1.2024 г..
//

#include "Cinema.h"

#include <iostream>

Cinema::Cinema(string name, std::string adress, vector<Hall> halls) {

    setName(name);
    setAdress(adress);
    setHallList(halls);
}


void Cinema::setName(std::string name) {
    this->name=name;

}

void Cinema::setHallList(vector<Hall> halls) {
    this->hallsList=halls;

}

string Cinema::getName() {
    return this->name = name;

}

void Cinema::setAdress(std::string) {
    this->adress = adress;
}

string Cinema::getAdress() {
    return this->adress;
}

void Cinema::print() {
    cout << " Cinema name " << getName() << " adress " << adress << endl;
    for (int i = 0; i < hallsList.size(); ++i) {
        hallsList.at(i).printInfo();
        cout << endl;
    }
}