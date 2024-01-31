// User.cpp
#include "User.h"

User::User(string customerName, vector<Orders*> orders) : customerName(customerName), orders(orders) {
}

string User::getCustomerName() {
    return customerName;
}

void User::setCustomerName(string customerName) {
    User:: customerName = customerName;
}


vector<Orders*> User::getOrders() {
    return orders;
}

bool User::makeOrder(vector<Drinks *> menu, vector<pair<string, int>> orderedDrinks, string date) {
    vector<Drinks *> drinksList;
    double totalSum = 0.0;

    for (pair<string, int> orderDetail : orderedDrinks) {
        const string drinkName = orderDetail.first;
        int quantity = orderDetail.second;

        // Find the drink in the menu
        Drinks *drink = nullptr;

        for (Drinks *menuDrink : menu) {
            if (menuDrink->getName() == drinkName && menuDrink->getQuantity() >= quantity) {
                drink = menuDrink;
                drink->setQuantity(drink->getQuantity() - quantity);
                break;
            }
        }

        if (drink) {
            // If the drink is found and there is enough quantity, add it to the order
            drinksList.push_back(drink);
            totalSum += drink->calculatePrice();
        } else {
            // If the drink is not found or there is not enough quantity, return false
            cout << "Drink not available: " << drinkName << endl;
            return false;
        }
    }

    // Create and add the order to the user's order list
    Orders *NewOrder = new Orders(orderedDrinks, orders.size() + 1, date);  // Change this line
    NewOrder->setTotalSum(totalSum);
    orders.push_back(NewOrder);

    // Return true to indicate that the order was successfully made
    return true;
}



