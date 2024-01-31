//
// Created by damya on 10.1.2024 г..
//
#include <iostream>
#include "Hall.h"

Hall::Hall(string hall, int capacity) {
    setName(hall);
    seatSeats(capacity);
}

Hall::Hall(std::string hallName, int capacity, vector<Screening> screeningList)
        : name(hallName), seats(capacity), screeningList(screeningList) {
}

void Hall::addScreeningList(Screening screening) {

    this->screeningList.push_back(screening);
}

void Hall::setName(std::string hallName) {
    this->name= hallName;
}

string Hall::getName() {
    return this->name=name;
}

void Hall::seatSeats(int capacity) {
    this->seats= capacity;
}

vector<Screening> Hall::getScreeningList() {
    return this->screeningList = screeningList;
}

void Hall::printInfo() {
    cout<< "Hall is: " << this->name << " " << "taken seats are - " << this->seats << endl;

    for (int i = 0; i < this->screeningList.size(); i++) {
        screeningList[i].print();
    }
}