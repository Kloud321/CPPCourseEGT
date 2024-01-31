//
// Created by damya on 21.1.2024 г..
//

#ifndef LUIBRARYBOOKMANAGMENT_REFERENCEBOOK_H
#define LUIBRARYBOOKMANAGMENT_REFERENCEBOOK_H

#include "Book.h"
#include <iostream>

using namespace std;
class ReferenceBook:public Book{

public:
    ReferenceBook( string, Author, Genre, int , int , int);
    virtual int calculateLateFee() const;
private:
    int rentalDuritation;
};


#endif //LUIBRARYBOOKMANAGMENT_REFERENCEBOOK_H
