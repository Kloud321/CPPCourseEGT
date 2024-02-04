//
// Created by damya on 4.2.2024 г..
//

#include "User.h"

User::User(string firstName, string lastName, string position)
: firstName(firstName), lastName(lastName), position(position) {

}

string User::getFirstName() const {
    return firstName;
}

void User::setFirstName(const string &firstName) {
    User::firstName = firstName;
}

string User::getLastName() const {
    return lastName;
}

void User::setLastName(const string &lastName) {
    User::lastName = lastName;
}

string User::getPosition() const {
    return position;
}

void User::setPosition(const string &position) {
    User::position = position;
}
