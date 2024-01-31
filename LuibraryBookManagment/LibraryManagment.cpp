//
// Created by damya on 21.1.2024 г..
//

#include "LibraryManagment.h"

LibraryManagment::LibraryManagment(vector<Book> listOfBooks) : listOfBooks(listOfBooks) {

}


void LibraryManagment::addBook(Book book) {
    listOfBooks.push_back(book);
}

void LibraryManagment::printInfo() {
    for (Book book : listOfBooks) {

        std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor().getFirstName()
                  << " " << book.getAuthor().getLastName() << ", Genre: " << Genre::genreTypeToString(book.getGenre().getGenresType())
                  << ", Year: " << book.getYear() << std::endl;
    }
}

Book LibraryManagment::findABookByAuthor(string authorName) {
    for (Book book : listOfBooks) {
        if (book.getAuthor().getFirstName() + " " + book.getAuthor().getLastName() == authorName) {
            return book;
        }
    }

    return Book("", Author("", "", ""), Genre(Genre::GenresType::CLASSIC), 0, 0);
}

Book LibraryManagment::findABookByName(string bookName) {
    for (Book book : listOfBooks) {
        if (book.getTitle().find(bookName) != string::npos ) { //// != -1 == string::npos
            return book;
        }
    }

    return Book("", Author("", "", ""), Genre(Genre::GenresType::CLASSIC), 0, 0);
}