//
// Created by damya on 29.1.2024 г..
//

#include "Price.h"

int main(){

    Price p1(5, "bgn");
    Price p2(5, "bgn");
    Price p3 = p1 + p2;

//    try {
//        Price p1(5, "bgn");
//        Price p2(5, "bgn");
//
//        Price p3 = p1 + p2;
//
//        cout << p3 << endl;
//    } catch (const std::invalid_argument& e) {
//        cout << "Error: " << e.what() << endl;
//    }

    /// == OperatorOverload
    if (p1 == p2) {
        cout << "p1 is equal to p2" << endl;
    } else {
        cout << "p1 is not equal to p2" << endl;
    }

    if (p1 == p3) {
        cout << "p1 is equal to p3" << endl;
    } else {
        cout << "p1 is not equal to p3" << endl;
    }

    return 0;
}


