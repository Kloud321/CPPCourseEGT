#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include <vector>


int main() {

    vector<Account *> accounts;
    Account *acc1 = new  SavingAccount("Ivan", "Damyanov", 50.99, 0.10);
    Account *acc2 = new  SavingAccount("Kalin", "Yorgov", 100.00, 0.20);
    acc1->debit(50);
    acc1->credit(0.01);
    accounts.push_back(acc1);
    accounts.push_back(acc2);

    for (int i = 0; i < accounts.size(); ++i) {
       accounts.at(i)->printInfo();
        if (SavingAccount *savingAccount = dynamic_cast<SavingAccount *>(accounts.at(i))) {
            // You can now use savingAccount to access SavingAccount-specific functionality
            double interest = savingAccount->calculateInterest();
            savingAccount->credit(interest);
            std::cout << "Interest for Saving Account: " << interest << std::endl;
            cout << "Account Balance is: " << savingAccount->getBalance() << endl;
            cout << endl;

        } else {
            // Handle cases where the account is not a SavingAccount
            std::cout << "This account is not a Saving Account." << std::endl;
        }

        // Cleanup: Don't forget to delete dynamically allocated objects
        delete accounts.at(i);
        }

    return 0;
}
