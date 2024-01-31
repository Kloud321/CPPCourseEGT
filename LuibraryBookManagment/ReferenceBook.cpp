//
// Created by damya on 21.1.2024 г..
//

#include "ReferenceBook.h"

ReferenceBook::ReferenceBook( string title, Author author,  Genre genre, int isbn, int year, int timeTaken)
: Book(title, author, genre, isbn, year), rentalDuritation(rentalDuritation) {

}

int ReferenceBook::calculateLateFee() const {

    return 2 * rentalDuritation;
}

