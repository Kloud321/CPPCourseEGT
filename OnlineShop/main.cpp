#include <iostream>
#include "Drinks.h"
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include "TypeEnum.h"
#include "Orders.h"
#include "User.h"
#include <vector>

using namespace std;

int main() {
    vector<Drinks *> drinksList;
    vector<Orders *> orderList;
    vector<User *> userList;

    //Type of drink;

    TypeEnum type(TypeEnum::AlcohlType::GIN);
    TypeEnum type2(TypeEnum::AlcohlType::WATER);

    //Filling the menu
    Alcoholic *drinks1 = new Alcoholic("Mallibu", 5.00, 2, type, 2, 0.5);
    NonAlcoholic *drinks2 = new NonAlcoholic("Bankq", 2.00, 1, type2, 4, 1);
    Alcoholic *drinks3 = new Alcoholic("Beach", 2.00, 2, type, 2, 0.5);
    NonAlcoholic *drinks4 = new NonAlcoholic("KOM", 2.00, 1, type2, 4, 1);

    drinksList.push_back(drinks1);
    drinksList.push_back(drinks2);
    drinksList.push_back(drinks3);
    drinksList.push_back(drinks4);

    // creating orders

    vector<pair<string, int>> drinksInOrder1;
    vector<pair<string, int>> drinksInOrder2;

    drinksInOrder1.push_back({"Mallibu", 2});
    drinksInOrder2.push_back({"Beach", 3});


    Orders *order1 = new Orders(drinksInOrder1, 1, "19.08.2022");
    Orders *order2 = new Orders(drinksInOrder2, 2, "20.08.2022");

    orderList.push_back(order1);
    orderList.push_back(order2);

    //Creating Users

    User *user2 = new User("Ivan", orderList);

    userList.push_back(user2);

    // Add more orders to the user after creating it

    for (User *user : userList) {
        cout << "Customer: " << user->getCustomerName() << endl;

        for (Orders *order : user->getOrders()) {
            cout << "Custormer order: " << order->getOrderNumber() << endl;
            cout << "Customer order date: " << order->getDate() << endl;
            cout << "Customer order total sum: " << order->getTotalSum(drinksList) << endl;
            cout << endl;
            cout << "Drinks ordered:" << endl;

            for (const auto &drink : order->getOrderedDrinks()) {
                // Access drink.first for the name and drink.second for the quantity
                cout << "Drink Name: " << drink.first << ", Quantity: " << drink.second << endl;

                // Now, if you want to find the corresponding Drinks object in the drinksList,
                // you can iterate through the drinksList and compare the names.
                for (Drinks *drinks : drinksList) {
                    if (drinks->getName() == drink.first) {
                        cout << "Current order Price: " << drinks->calculatePrice() << endl;
                        cout << endl;
                        break;  // Exit the loop after finding the corresponding drink
                    }
                }
            }
        }
    }


    for (Drinks *drink : drinksList){

        drink->printInfo();
    }


    // Clean up memory
    for (Drinks *drink : drinksList) {
        delete drink;
    }

    for (Orders *order : orderList) {
        delete order;
    }

    for (User *user : userList) {
        delete user;
    }

    return 0;
}
