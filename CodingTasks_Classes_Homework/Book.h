//
// Created by damya on 16.2.2024 г..
//

#ifndef CODINGTASKS_CLASSES_HOMEWORK_BOOK_H
#define CODINGTASKS_CLASSES_HOMEWORK_BOOK_H

#include <iostream>
using std::cout;
using std::endl;
using std::string;


class Book {
public:
    Book(const string &title, const string &author, int pages);
    void display();
private:
    string title;
    string author;
    int pages;
};


#endif //CODINGTASKS_CLASSES_HOMEWORK_BOOK_H
