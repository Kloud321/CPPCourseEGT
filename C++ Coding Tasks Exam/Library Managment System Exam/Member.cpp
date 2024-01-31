//
// Created by damya on 31.1.2024 г..
//

#include "Member.h"
Member::Member(const string &name, int age, const string &memberId) : name(name), age(age), memberId(memberId) {}

const string &Member::getName() const {
    return name;
}

void Member::setName(const string &name) {
    Member::name = name;
}

int Member::getAge() const {
    return age;
}

void Member::setAge(int age) {
    Member::age = age;
}

const string &Member::getMemberId() const {
    return memberId;
}

void Member::setMemberId(const string &memberId) {
    Member::memberId = memberId;
}

void Member::display() {
    cout << "Member name: " <<  this->name << endl;
    cout << "Member age: " <<  this->age << endl;
    cout << "Member ID: " <<  this->memberId << endl;

}

Book* Member::borrowBook(Book *book) {
    // We are making sure pointer is not pointing to invalid memory location
    if (book == nullptr) {
        cout << "Invalid book." << endl;
        return nullptr;
    }
    // If the book is not available we wanna make sure we will return nullptr
    if (!book->bookIsAviable()) {
        cout << "Book " << book->getTitle() << " is not available for borrowing." << endl;
        return nullptr;
    }
    /// if book is available we return the pointer to the book
    book->setAviable(false);
    cout << "Book -> " << book->getTitle() << " is borrowed." << endl;
    return book;
}




