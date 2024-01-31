//
// Created by damya on 19.1.2024 г..
//

#include "Book.h"

Book::Book(string name, Author author,  Genre genre, int year)
: name(name), author(author), genre(genre), year(year) {

}

void Book::setName(string newName) {
    this->name = newName;
}

string Book::getName()  {
    return name;
}

void Book::setAuthor(Author newAuthor) {
    this->author = newAuthor;
}

Author Book::getAuthor()  {
    return author;
}

void Book::setGenre(Genre newGenre) {
    this->genre = newGenre;
}

Genre Book::getGenre()  {
    return genre;
}

void Book::setYear(int newYear) {
    this->year = newYear;
}

int Book::getYear() {
    return year;
}

