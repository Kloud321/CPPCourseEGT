//
// Created by damya on 1.2.2024 г..
//
#include "Card.h"

Card::Card(Card::Type cardType, Card::Suit SuitColor) : type(cardType), suit(SuitColor) {

}

Card::Type Card::getType() const {
    return this->type;
}

Card::Suit Card::getSuit() const {

    return this->suit;
}

