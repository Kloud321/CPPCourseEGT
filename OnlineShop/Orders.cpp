// Orders.cpp
#include "Orders.h"

// Modify the constructor to take a vector<pair<string, int>> parameter
Orders::Orders(vector<pair<string, int>> orderedDrinks, int orderNumber, string date) : orderedDrinks(orderedDrinks), orderNumber(orderNumber), date(date) {
}

vector<pair<string, int>> Orders::getOrderedDrinks() {
    return orderedDrinks;
}

void Orders::setOrderedDrinks(vector<pair<string, int>> orderedDrinks) {
    Orders::orderedDrinks = orderedDrinks;
}

string Orders::getDate() {
    return date;
}

void Orders::setDate(string date) {
    Orders::date = date;
}

int Orders::getOrderNumber() {
    return orderNumber;
}

void Orders::setOrderNumber(int orderNumber) {
    Orders::orderNumber = orderNumber;
}

double Orders::getTotalSum(const vector<Drinks *> drinklist) {
    totalSum = 0.0;

    // Iterate over the ordered drinks and accumulate the prices
    for (const auto &drink : orderedDrinks) {
        const string drinkName = drink.first;
        int quantity = drink.second;

        // Find the corresponding drink in your menu
        for (Drinks *drinks : drinklist) {
            if (drinks->getName() == drinkName) {
                // Accumulate the price based on the quantity
                totalSum += drinks->calculatePrice() * quantity;
                break;  // Exit the loop after finding the corresponding drink
            }
        }
    }

    return totalSum;
}


void Orders::setTotalSum(double totalSum) {
    Orders::totalSum = totalSum;
}