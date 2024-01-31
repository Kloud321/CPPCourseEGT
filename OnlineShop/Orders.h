// Orders.h
#ifndef ONLINESHOPPOLYMORPHISAMABSTRACTION_ORDERS_H
#define ONLINESHOPPOLYMORPHISAMABSTRACTION_ORDERS_H

#include <string>
#include <vector>
#include "Drinks.h"

using namespace std;

class Orders {
public:
    // Modify the constructor to take a vector<pair<string, int>> parameter
    Orders(vector<pair<string, int>>, int, string);

    vector<pair<string, int>> getOrderedDrinks();

    void setOrderedDrinks(vector<pair<string, int>> orderedDrinks);

    string getDate();

    void setDate(string date);

    int getOrderNumber();

    void setOrderNumber(int orderNumber);

    double getTotalSum(vector<Drinks *>);

    void setTotalSum(double totalSum);

private:
    vector<pair<string, int>> orderedDrinks;
    int orderNumber;
    string date;
    double totalSum;
};

#endif //ONLINESHOPPOLYMORPHISAMABSTRACTION_ORDERS_H
