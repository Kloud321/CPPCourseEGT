#include <iostream>
#include <iostream>
#include <vector>
#include "Author.h"
#include "Book.h"
#include "Library.h"

using namespace std;


int main() {

    Author author("Pesho", "Ivanov", "Bulgarian");
    Genre genre(Genre::Type::CLASSIC);
    Book book("Rambo", author, genre, 1992);


    Author author1("J.K.", "Rowling", "British");
    Genre genre1(Genre::Type::FANTASY);
    Book book1("Harry Potter", author1, genre1,  1997);


    Author author2("J", "R", "British");
    Genre genre2(Genre::Type::FANTASY);
    Book book2("Harry Potter 2", author2, genre2,  2001);

    vector<Book> books;
    books.push_back(book);
    books.push_back(book1);
    books.push_back(book2);

    Library library(books);
    library.printInfo();

    cout << endl;

    // Search for a book by author name
    string authorName;
    cout << "Enter the author's full name to search for a book: ";
    getline(cin, authorName);

    Book foundBookByAuthor = library.findABookByAuthor(authorName);

    cout << endl;

    if (foundBookByAuthor.getName() != "") {
        cout << "Book found by author: " << foundBookByAuthor.getName() << endl;
    } else {
        cout << "Book not found by author." << endl;
    }
    cout << endl;

    string bookName;
    cout << "Enter the book name or part of the name to search for a book: ";
    getline(cin, bookName);

    cout << endl;

    Book foundBookByName = library.findABookByName(bookName);
    if (foundBookByName.getName() != "") {
        cout << "Book found by name: " << foundBookByName.getName() << endl;
    } else {
        cout << "Book not found by name." << endl;
    }

    return 0;

}
