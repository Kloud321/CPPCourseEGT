//
// Created by damya on 29.1.2024 г..
//

#ifndef OVERLOAD_OPERATOR_PRICE_H
#define OVERLOAD_OPERATOR_PRICE_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Price {
public:
    Price(int, string);

    int getAmount() const;

    const string getCurrency() const;

    Price operator+(const Price&) const;

    friend ostream& operator<<(ostream&, const Price&);

    bool operator==(const Price& other) const;

private:
    int amount;
    string currency;


};


#endif //OVERLOAD_OPERATOR_PRICE_H
