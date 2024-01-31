//
// Created by damya on 10.1.2024 г..
//

#ifndef CINEMA_C___CINEMA_H
#define CINEMA_C___CINEMA_H
#include "string"
#include "vector"
#include "Hall.h"

using namespace std;

class Cinema {

public:
    void setName(string);
    string getName();
    void setAdress(string);
    string getAdress();
    void setHallList(vector<Hall>);
    vector<Hall> getHallList();
    void addHallToList(Hall);
    void print();

private:
    string name;
    string adress;
    vector <Hall> hallsList;

public:

    Cinema(string, string, vector<Hall>);
};


#endif //CINEMA_C___CINEMA_H
