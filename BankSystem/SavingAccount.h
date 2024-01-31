//
// Created by damya on 19.1.2024 г..
//

#ifndef ACCOUNT_POLYMORPHISAM_TASK_SAVINGACCOUNT_H
#define ACCOUNT_POLYMORPHISAM_TASK_SAVINGACCOUNT_H

#include "Account.h"
using namespace std;
class SavingAccount : public Account {
public:
    SavingAccount(string, string, double, double);

    double calculateInterest();
    double debit(double);
    double credit(double);

private:
    double interestRate;



};


#endif //ACCOUNT_POLYMORPHISAM_TASK_SAVINGACCOUNT_H
