//
// Created by damya on 10.1.2024 г..
//

#ifndef CINEMA_C___SCREENING_H
#define CINEMA_C___SCREENING_H

#include "string"

class Screening {
public:
    Screening(std::string, int);
    void setMovieName(std::string);
    void setSoldTickets(int);
    int getSoldTickets();
    std::string getMovieName();
    int getSolidTickets();
    void print();

private:
    std::string movieName;
    int solidTickets;
};

#endif //CINEMA_C___SCREENING_H
