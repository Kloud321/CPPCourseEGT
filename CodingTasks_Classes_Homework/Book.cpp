//
// Created by damya on 16.2.2024 г..
//

#include "Book.h"

Book::Book(const string &title, const string &author, int pages) : title(title), author(author), pages(pages) {}


void Book::display(){

    cout << "Book Info:" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Pages :" << pages << endl;

}
