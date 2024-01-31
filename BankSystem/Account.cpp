//
// Created by damya on 19.1.2024 г..
//

#include "Account.h"

Account::Account(string firstName,  string lastName, double balance) :
firstName(firstName), lastName(lastName), balance(balance) {

}

string Account::getFirstName()  {
    return firstName;
}

void Account::setFirstName( string firstName) {
    Account::firstName = firstName;
}

string Account::getLastName() {
    return lastName;
}

void Account::setLastName( string lastName) {
    Account::lastName = lastName;
}

double Account::getBalance() {
    return balance;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}


void Account::printInfo() {

    cout << "Account info" << endl;
    cout << "First name: " << this->firstName << endl;
    cout << "Last name: " << this->lastName << endl;
    cout << "Balance: " << this->balance << endl;

    cout << endl;
}
