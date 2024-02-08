//
// Created by damya on 7.2.2024 г..
//

#include "Workstation.h"

Workstation::Workstation(string building, string floor, string desc) : building(building), floor(floor), desc(desc) {}

string Workstation::getBuilding() const {
    return building;
}

void Workstation::setBuilding(int building) {
    Workstation::building = building;
}

string Workstation::getFloor() const {
    return floor;
}

void Workstation::setFloor(int floor) {
    Workstation::floor = floor;
}

string Workstation::getDesc() const {
    return desc;
}

void Workstation::setDesc(int desc) {
    Workstation::desc = desc;
}
