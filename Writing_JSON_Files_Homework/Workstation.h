//
// Created by damya on 7.2.2024 г..
//

#ifndef XMLFIX_WORKSTATION_H
#define XMLFIX_WORKSTATION_H

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Workstation {
public:
    Workstation(string building, string floor, string desc);

    string getBuilding() const;

    void setBuilding(int building);

    string getFloor() const;

    void setFloor(int floor);

    string getDesc() const;

    void setDesc(int desc);

private:
    string building;
    string floor;
    string desc;
};


#endif //XMLFIX_WORKSTATION_H
