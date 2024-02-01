//
// Created by damya on 1.2.2024 г..
//

#include "Deck.h"


void Deck::raffleSchuffle() {
    // Calculate the midpoint of the deck
    auto midpoint = cards.begin() + cards.size() / 2;

    // Split the deck into two halves
    vector<unique_ptr<Card>> firstHalf(make_move_iterator(cards.begin()), make_move_iterator(midpoint));
    vector<unique_ptr<Card>> secondHalf(make_move_iterator(midpoint), make_move_iterator(cards.end()));

    // Clear the original deck
    cards.clear();

    // Interleave cards from the two halves into the new deck
    for (size_t i = 0; i < firstHalf.size(); ++i) {
        cards.push_back(move(firstHalf[i]));
        if (i < secondHalf.size()) {
            cards.push_back(move(secondHalf[i]));
        }
    }
}





string typeToString(Card::Type cardType) {
    switch (cardType) {
        case Card::ACE: return "ACE";
        case Card::TWO: return "TWO";
        case Card::THREE: return "THREE";
        case Card::FOUR: return "FOUR";
        case Card::FIVE: return "FIVE";
        case Card::SIX: return "SIX";
        case Card::SEVEN: return "SEVEN";
        case Card::EIGHT: return "EIGHT";
        case Card::NINE: return "NINE";
        case Card::TEN: return "TEN";
        case Card::JACK: return "JACK";
        case Card::QUEEN: return "QUEEN";
        case Card::KING: return "KING";
        default: return "UNKNOWN";
    }
}

string suitToString(Card::Suit cardSuit) {
    switch (cardSuit) {
        case Card::HEARTS: return "HEARTS";
        case Card::DIAMONDS: return "DIAMONDS";
        case Card::CLUBS: return "CLUBS";
        case Card::SPADES: return "SPADES";
        default: return "UNKNOWN";
    }
}


void Deck::displayDeck() {
    for (auto& card : cards) {
        std::cout << "Type: " << typeToString(card->getType()) << ", Suit: " << suitToString(card->getSuit()) << std::endl;
    }
}
