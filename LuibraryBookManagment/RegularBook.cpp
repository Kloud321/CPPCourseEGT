//
// Created by damya on 21.1.2024 г..
//

#include "RegularBook.h"
RegularBook::RegularBook( string title, Author author,  Genre genre, int isbn, int year, int rentalDuritation, bool isRestricted)
        : Book(title, author, genre, isbn, year), rentalDuritation(rentalDuritation), isRestricted(isRestricted) {

}

int RegularBook::calculateLateFee() const{
    if(isRestricted){
        return 5 * rentalDuritation;
    }
    return 0;
}

bool RegularBook::isRestrict() const {
    return isRestricted;
}