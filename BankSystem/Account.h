//
// Created by damya on 19.1.2024 г..
//

#ifndef ACCOUNT_POLYMORPHISAM_TASK_ACCOUNT_H
#define ACCOUNT_POLYMORPHISAM_TASK_ACCOUNT_H

#include <string>
#include <iostream>
using namespace std;

class Account {
public:
    Account( string, string, double);

    string getFirstName();

    void setFirstName(string firstName);

    string getLastName() ;

    void setLastName(string lastName);

    double getBalance();

    void setBalance(double balance);

    void printInfo();

    virtual double debit(double) = 0;

    virtual double credit(double) = 0;



private:
    string firstName;
    string lastName;
    double balance;

};


#endif //ACCOUNT_POLYMORPHISAM_TASK_ACCOUNT_H
