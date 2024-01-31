//
// Created by damya on 8.1.2024 г..
//
using namespace std;
#include "Student.h"
#include <iostream>

Student::Student(string name, int id) {
    setName(name);
    setID(id);

}

void Student::setName(std::string name) {
    this->name = name;
}

string Student::getName() {
    return name;
}

int Student::getID() {
    return id;
}


void Student::setID(int id) {
    this->id = id;
}


void Student::printInfo() {
    cout << "Student name " << this->name << " Student ID " << this->id << endl;
}
