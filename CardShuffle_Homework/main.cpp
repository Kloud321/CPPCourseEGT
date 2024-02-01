//
// Created by damya on 1.2.2024 г..
//
#include <memory>
#include "Deck.h"

int main() {

    unique_ptr<Card> cardPtr = make_unique<Card>(Card::ACE, Card::DIAMONDS);

    Deck deck1;

    deck1.displayDeck();
    cout<<endl;
    deck1.raffleSchuffle();
    deck1.displayDeck();


    return 0;

}