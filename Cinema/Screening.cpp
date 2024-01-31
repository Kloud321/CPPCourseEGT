//
// Created by damya on 10.1.2024 г..
//
#include <iostream>
#include "Screening.h"

using namespace std;

Screening::Screening(string movieName, int tickets) {
    setMovieName(movieName);
    setSoldTickets(tickets);
}

void Screening::setMovieName(std::string movieName) {
    if(movieName.length() >5){
        this->movieName = movieName;
    }else{
        this->movieName = "";
        cerr << "Invalid name!!!"<< endl;
    }
}

void Screening::setSoldTickets(int tickets) {

    if (tickets >=0){
        this->solidTickets = tickets;
    }
    else {
        this->solidTickets= 0;
    }
}


string Screening::getMovieName() {
    return this->movieName;
}

int Screening::getSoldTickets() {
    return this->solidTickets;
}

void Screening::print() {
    cout << "Ongoing projection is "
         << this->getMovieName() << " "
         << "with " <<this->getSoldTickets() << " sold tickets."<<endl;
}