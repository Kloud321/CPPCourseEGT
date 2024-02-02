//
// Created by damya on 21.1.2024 г..
//

#include "Book.h"

Book::Book(string title, Author author,  Genre genre, int isbn, int year) : author(author), genre(genre)
 {
     setTitle(title);
     setIsbn(isbn);
     setYear(year);
 }

string Book::getTitle(){
    return title;
}

void Book::setTitle(string title) {
    Book::title = title;
}

Author Book::getAuthor() {
    return author;
}

void Book::setAuthor(Author author) {
    Book::author = author;
}

Genre Book::getGenre() {
    return genre;
}

void Book::setGenre( Genre genre) {
    Book::genre = genre;
}

int Book::getIsbn() {
    return isbn;
}

void Book::setIsbn(int isbn) {
    Book::isbn = isbn;
}

int Book::getYear() {
    return year;
}

void Book::setYear(int year) {
    Book::year = year;
}

int Book::calculateLateFee() const {
    // Default implementation (you can provide a specific implementation in derived classes)
    return 0;
}


