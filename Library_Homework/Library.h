//
// Created by damya on 19.1.2024 г..
//

#ifndef EXAMPERPBOOK_LIBRARY_H
#define EXAMPERPBOOK_LIBRARY_H
#include <iostream>
#include "vector"
#include "Book.h"

using namespace std;


class Library {

public:
    Library(vector<Book>);
    void addBook(Book);
    void printInfo();
    Book findABookByAuthor(string authorName);
    Book findABookByName(string bookName);


private:
    vector<Book> Books;
};


#endif //EXAMPERPBOOK_LIBRARY_H
