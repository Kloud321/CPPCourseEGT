//
// Created by damya on 19.1.2024 г..
//

#ifndef EXAMPERPBOOK_BOOK_H
#define EXAMPERPBOOK_BOOK_H
#include <string>

using namespace std;
#include "Author.h"
#include "Genre.h"


class Book {
public:
    Book(string, Author , Genre, int);

    void setName(string);
    string getName();
    void setAuthor(Author);
    Author  getAuthor();
    void setGenre(Genre);
    Genre getGenre();
    void setYear(int);
    int getYear();
    void addBook(){};

private:
    string name;
    Author author;
    Genre genre;
    int year;
};


#endif //EXAMPERPBOOK_BOOK_H
