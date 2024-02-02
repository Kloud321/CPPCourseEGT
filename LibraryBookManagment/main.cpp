#include <iostream>
#include "Author.h"
#include "Genre.h"
#include "LibraryManagment.h"
#include "ReferenceBook.h"
#include "RegularBook.h"
#include <vector>

using namespace std;
int main() {

    vector<Book> listOfBooks;


    Author author("Pesho", "Ivanov", "Bulgarian");
    Genre genre(Genre::GenresType::CLASSIC);
    RegularBook regularBook("Rambo", author, genre, 1, 1999, 7, false);
    ReferenceBook referenceBook("Encyclopedia", author, genre, 2, 2005, true);

    listOfBooks.push_back(regularBook);
    listOfBooks.push_back(referenceBook);

    LibraryManagment library(listOfBooks);
    library.printInfo();


    for (int i = 0; i < listOfBooks.size(); ++i) {

        const Book& currentBook = listOfBooks.at(i);

        // Check the type of book and perform specific actions
        if (const ReferenceBook* referenceBookPtr = dynamic_cast<const ReferenceBook*>(&currentBook)) {
            // It's a RegularBook
            double fee = referenceBookPtr->calculateLateFee();
            cout << "Late fee for Regular Book: " << fee << endl;
        } else if (const RegularBook* regularBookPtr = dynamic_cast<const RegularBook*>(&currentBook)) {
            // It's a ReferenceBook
            bool isRestricted = regularBookPtr->isRestrict();
            cout << "Is Reference Book Restricted? " << (isRestricted ? "Yes" : "No") << endl;
        } else {
            // Handle cases where the book is neither RegularBook nor ReferenceBook
            cout << "Unknown book type." << endl;
        }
        }



        return 0;
}
