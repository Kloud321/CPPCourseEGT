//
// Created by damya on 19.1.2024 г..
//

#include "Author.h"

Author::Author( string firstName, string lastName,  string nationality)
: firstName(firstName), LastName(lastName), nationality(nationality) {

}

string Author::getFirstName(){
    return firstName;
}

void Author::setFirstName( string firstName) {
    this -> firstName = firstName;
}

string Author::getLastName(){
    return LastName;
}

void Author::setLastName(string lastName) {
    this -> LastName = lastName;
}

string Author::getNationality() {
    return nationality;
}

void Author::setNationality( string nationality) {
    this -> nationality = nationality;
}
