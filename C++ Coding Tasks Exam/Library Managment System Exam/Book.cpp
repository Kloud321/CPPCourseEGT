//
// Created by damya on 31.1.2024 г..
//

#include "Book.h"

Book::Book(const string &title, const string &author, const string &isbn) : title(title), author(author), ISBN(isbn) {}

const string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const string &title) {
    Book::title = title;
}

const string &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const string &author) {
    Book::author = author;
}

const string &Book::getIsbn() const {
    return ISBN;
}

void Book::setIsbn(const string &isbn) {
    ISBN = isbn;
}

void Book::display() {
    cout << "Book title: " <<  this->title << endl;
    cout << "Book author: " <<  this->author << endl;
    cout << "Book ISBN: " <<  this->ISBN << endl;

}

void Book::setAviable(bool boolean){
    this->aviable = boolean;
}

bool Book::bookIsAviable() {
    return this->aviable;
}