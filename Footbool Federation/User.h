//
// Created by damya on 23.1.2024 г..
//

#ifndef FOOTBOOLFEDERATION_USER_H
#define FOOTBOOLFEDERATION_USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
public:
    User(string username, string password);

    string getUsername();

    void setUsername(string username);

    string getPassword();

    void setPassword(string password);

private:
    string username;
    string password;
};


#endif //FOOTBOOLFEDERATION_USER_H
