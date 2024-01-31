//
// Created by damya on 10.1.2024 г..
//

#ifndef CINEMA_C___HALL_H
#define CINEMA_C___HALL_H

#include <string>
#include "Screening.h"
#include <vector>

using namespace std;

class Hall {

public:
    Hall(string, int);
    Hall(string, int, vector<Screening>);
    void setScreeningList(vector<Screening>);
    vector<Screening> getScreeningList();
    void addScreeningList(Screening);
    void setName(string);
    string getName();
    void seatSeats(int);
    void printInfo();

private:
    string name;
    int seats;
    vector<Screening> screeningList;
};


#endif //CINEMA_C___HALL_H
