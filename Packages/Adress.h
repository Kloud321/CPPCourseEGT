//
// Created by damya on 17.1.2024 г..
//

#ifndef PACAGE_INHERITANCE_ADRESS_H
#define PACAGE_INHERITANCE_ADRESS_H

#include <string>

using namespace std;

class Adress {
public:
    Adress(string name, int phoneNumber, string city, string streetAdress);
    void setName(string);
    string getName();

    void setPhone(int);
    int getPhone();

    void setCity(string);
    string getCity();

    void setStreetAdress(string);
    string getStreetAdress();

    void printInfo();



private:
    string name;
    int phoneNumber;
    string city;
    string streetAdress;

};


#endif //PACAGE_INHERITANCE_ADRESS_H
