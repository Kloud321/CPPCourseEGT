//
// Created by damya on 21.1.2024 г..
//

#ifndef LUIBRARYBOOKMANAGMENT_REGULARBOOK_H
#define LUIBRARYBOOKMANAGMENT_REGULARBOOK_H

#include <iostream>
#include "Book.h"

using namespace std;

class RegularBook: public Book {
public:
    RegularBook( string, Author, Genre, int , int, int, bool);
    virtual int calculateLateFee() const;
    bool isRestrict() const;

private:
    int rentalDuritation;
    bool isRestricted;

};


#endif //LUIBRARYBOOKMANAGMENT_REGULARBOOK_H
