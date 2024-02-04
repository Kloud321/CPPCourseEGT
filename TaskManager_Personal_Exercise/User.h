//
// Created by damya on 4.2.2024 г..
//

#ifndef TODOLIST_USER_H
#define TODOLIST_USER_H
#include <string>
#include "Task.h"
#include <iostream>
using namespace std;
#include <vector>

class User {
public:
    User(string, string, string);

    string getFirstName() const;
    void setFirstName(const string &firstName);

    string getLastName() const;
    void setLastName(const string &lastName);

    string getPosition() const;
    void setPosition(const string &position);


    virtual void displayInfo()=0;

private:
    string firstName;
    string lastName;
    string position;
};


#endif //TODOLIST_USER_H
