//
// Created by damya on 31.1.2024 г..
//

#ifndef LIBRARY_MEMBER_H
#define LIBRARY_MEMBER_H
using namespace std;
#include <string>
#include <iostream>
#include "Book.h"

class Member {
public:
    Member(const string &name, int age, const string &memberId);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    const string &getMemberId() const;

    void setMemberId(const string &memberId);

    void display();

    Book* borrowBook (Book *book);

private:
    string name;
    int age;
    string memberId;
};


#endif //LIBRARY_MEMBER_H
