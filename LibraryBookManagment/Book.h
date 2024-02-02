//
// Created by damya on 21.1.2024 г..
//

#ifndef LUIBRARYBOOKMANAGMENT_BOOK_H
#define LUIBRARYBOOKMANAGMENT_BOOK_H

#include "Author.h"
#include "Genre.h"
#include <iostream>
#include "string"

using namespace std;

class Book {
public:
    Book(string, Author, Genre, int, int);

    string getTitle();

    void setTitle(string);

    Author getAuthor();

    void setAuthor(Author author);

    Genre getGenre();

    void setGenre(Genre genre);

    int getIsbn();

    void setIsbn(int isbn);

    int getYear();

    void setYear(int year);

    virtual int calculateLateFee() const;

private:
    string title;
    Author author;
    Genre genre;
    int isbn;
    int year;
};


#endif //LUIBRARYBOOKMANAGMENT_BOOK_H
