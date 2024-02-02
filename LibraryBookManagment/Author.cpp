//
// Created by damya on 21.1.2024 г..
//

#include "Author.h"

Author::Author(string firstName, string lastName,  string nationallity)
 {
    setFirstName(firstName);
    setLastName(lastName);
    setNationallity(nationallity);
}

 string Author::getFirstName()  {
    return firstName;
}

void Author::setFirstName( string firstName) {
    Author::firstName = firstName;
}

 string Author::getLastName()  {
    return LastName;
}

void Author::setLastName(string lastName) {
    LastName = lastName;
}

string Author::getNationallity()  {
    return nationallity;
}

void Author::setNationallity( string nationallity) {
    Author::nationallity = nationallity;
}

void Author::printInfo() {
    cout << "Author's Info:" << endl;
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Nationality: " << getNationallity() << endl;
    cout << endl;
}
