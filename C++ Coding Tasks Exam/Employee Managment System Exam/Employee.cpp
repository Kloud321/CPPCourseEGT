//
// Created by damya on 31.1.2024 г..
//

#include "Employee.h"

Employee::Employee(const string &name, int id, const string &position) : name(name), ID(id), position(position) {

}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

int Employee::getId() const {
    return ID;
}

void Employee::setId(int id) {
    ID = id;
}

const string &Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const string &position) {
    Employee::position = position;
}

void Employee::display() {

    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->ID << endl;
    cout << "Position: " << this->position << endl;

}