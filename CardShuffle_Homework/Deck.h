//
// Created by damya on 1.2.2024 г..
//

#ifndef CARDSHUFFLE_DECK_H
#define CARDSHUFFLE_DECK_H
#include "Card.h"
#include <vector>
using namespace std;
#include <memory>
#include <iostream>

class Deck {
public:

    void raffleSchuffle();

    Deck() {
        // Populate the deck with standard 52 cards
        for (int s = Card::HEARTS; s <= Card::SPADES; ++s) {
            for (int t = Card::ACE; t <= Card::KING; ++t) {
                cards.push_back(std::make_unique<Card>(static_cast<Card::Type>(t), static_cast<Card::Suit>(s)));
            }
        }
    }

    // Print the deck
    void displayDeck();

private:
    vector<unique_ptr<Card>> cards;
};

string typeToString(Card::Type);
string suitToString(Card::Suit);


#endif //CARDSHUFFLE_DECK_H
