//
// Created by damya on 19.1.2024 г..
//

#ifndef EXAMPERPBOOK_AUTHOR_H
#define EXAMPERPBOOK_AUTHOR_H
#include <string>

using namespace std;

class Author {
public:
    Author( string firstName, string lastName, string nationality);

private:

    string firstName;
    string LastName;
    string nationality;

public:
    string getFirstName();
    void setFirstName(string);
    string getLastName();
    void setLastName(string);
    string getNationality();
    void setNationality(string nationality);

};


#endif //EXAMPERPBOOK_AUTHOR_H
