//
// Created by damya on 29.1.2024 г..
//

#include "Price.h"

Price::Price(int amount, std::string currency) : amount(amount), currency(currency){

}

int Price::getAmount() const {
    return amount;
}

const string Price::getCurrency() const {
    return currency;
}

Price Price::operator+(const Price& other) const {

    if (this->currency != other.currency) {
        throw invalid_argument("Currencies are not the same");
    }
    return Price(this->amount + other.amount, this->currency);

}

ostream& operator<<(ostream& os, const Price& obj1){

    os << obj1.amount << " " << obj1.currency << endl;
}

bool Price::operator==(const Price& other) const {

    return (this->amount == other.amount) && (this->currency == other.currency);
}



