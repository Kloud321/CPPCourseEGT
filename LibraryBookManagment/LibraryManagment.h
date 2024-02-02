//
// Created by damya on 21.1.2024 г..
//

#ifndef LUIBRARYBOOKMANAGMENT_LIBRARYMANAGMENT_H
#define LUIBRARYBOOKMANAGMENT_LIBRARYMANAGMENT_H
#include "Book.h"
#include <vector>
using namespace std;

class LibraryManagment {
public:

    LibraryManagment(vector<Book >);
    void addBook(Book);
    void printInfo();
    Book findABookByAuthor(string authorName);
    Book findABookByName(string bookName);
private:
    vector<Book> listOfBooks;
};


#endif //LUIBRARYBOOKMANAGMENT_LIBRARYMANAGMENT_H
