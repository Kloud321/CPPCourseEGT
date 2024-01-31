// User.h
#ifndef ONLINESHOPPOLYMORPHISAMABSTRACTION_USER_H
#define ONLINESHOPPOLYMORPHISAMABSTRACTION_USER_H

#include <string>
#include <vector>
#include "Orders.h"

using namespace std;

class User {
public:
    User(string customerName,  vector<Orders*> orders);

    string getCustomerName();

    void setCustomerName(string);

    vector<Orders*> getOrders();

    // Modify the makeOrder method
    bool makeOrder(vector<Drinks *> menu, vector<pair<string, int>> orderedDrinks, string date);

    void addOrder(Orders *order);

private:
    string customerName;
    vector<Orders*> orders;
};

#endif //ONLINESHOPPOLYMORPHISAMABSTRACTION_USER_H
