//
// Created by damya on 31.1.2024 г..
//

#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

using namespace std;
#include <string>
#include <iostream>
#include <vector>

class Book {
public:
    Book(const string &title, const string &author, const string &isbn);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getAuthor() const;

    void setAuthor(const string &author);

    const string &getIsbn() const;

    void setIsbn(const string &isbn);

    void display();

    bool bookIsAviable();

    void setAviable(bool);

private:
    string title;
    string author;
    string ISBN;
    bool aviable = true;

};


#endif //LIBRARY_BOOK_H
