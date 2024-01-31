//
// Created by damya on 29.1.2024 г..
//
#include "Price.h"


int main(){
    try {
        Price p1(5, "bgn");
        Price p2(5, "bn");

        Price p3 = p1 + p2;

        cout << p3.getAmount() << " " << p3.getCurrency() << endl;
    } catch (const std::invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}