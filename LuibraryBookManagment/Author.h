//
// Created by damya on 21.1.2024 г..
//

#ifndef LUIBRARYBOOKMANAGMENT_AUTHOR_H
#define LUIBRARYBOOKMANAGMENT_AUTHOR_H

#include "string"
#include <iostream>

using namespace std;

class Author {

public:
    Author(string firstName, string lastName, string nationallity);

    string getFirstName();

    void setFirstName(string firstName);

    string getLastName();

    void setLastName(string lastName);

    string getNationallity();

    void setNationallity(string nationallity);

    void printInfo();

private:
    string firstName;
    string LastName;
    string nationallity;

};


#endif //LUIBRARYBOOKMANAGMENT_AUTHOR_H
