//
// Created by damya on 19.1.2024 г..
//

#include "SavingAccount.h"

SavingAccount::SavingAccount(string firstName, string lastName, double balance, double interestRate)
        : Account(firstName, lastName, balance), interestRate(interestRate) {
}

double SavingAccount::calculateInterest() {

    return getBalance() * interestRate;

}

double SavingAccount::debit(double amount) {
    if (amount > 0 && amount <= getBalance()) {
        setBalance(getBalance() - amount);
        return amount;
    }
    return 0.0; // Unable to perform the debit operation
}

double SavingAccount::credit(double amount) {
    if (amount > 0) {
        setBalance(getBalance() + amount);
        return amount;
    }
    return 0.0; // Unable to perform the credit operation
}

double Account::credit(double amount) {

    if (amount > 0) {
        balance += amount;
        return amount;
    }
    return 0.0; // Unable to perform the credit operation
}
