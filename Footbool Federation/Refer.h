//
// Created by damya on 23.1.2024 г..
//

#ifndef FOOTBOOLFEDERATION_REFER_H
#define FOOTBOOLFEDERATION_REFER_H

#include "User.h"
#include "vector"
class Refer : public User {

public:
    Refer(string username, string password, string firstName, string lastName, int years);

    string getFirstName();


    void setFirstName( string firstName);

    string getLastName();

    void setLastName(string lastName);

    int getYears();

    void setYears(int years);

    void printInfo();

private:
    string firstName;
    string lastName;
    int years;

};


#endif //FOOTBOOLFEDERATION_REFER_H
