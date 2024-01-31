//
// Created by damya on 19.1.2024 г..
//

#include "Library.h"

Library::Library(vector<Book> libraryOfBooks) : Books(libraryOfBooks){
}


void Library::addBook( Book book) {
    Books.push_back(book);
}

void Library::printInfo() {
    for (Book book : Books) {

        std::cout << "Title: " << book.getName() << ", Author: " << book.getAuthor().getFirstName()
                  << " " << book.getAuthor().getLastName() << ", Genre: " << Genre::genreTypeToString(book.getGenre().getGenreType())
                  << ", Year: " << book.getYear() << std::endl;
    }
}

Book Library::findABookByAuthor(string authorName) {
    for (Book book : Books) {
        if (book.getAuthor().getFirstName() + " " + book.getAuthor().getLastName() == authorName) {
            return book;
        }
    }


    return Book("", Author("", "", ""), Genre(Genre::Type::CLASSIC), 0);
}

Book Library::findABookByName(string bookName) {
    for (Book book : Books) {
        if (book.getName().find(bookName) != string::npos ) { //// != -1 == string::npos
            return book;
        }
    }

    return Book("", Author("", "", ""), Genre(Genre::Type::CLASSIC), 0);
}

