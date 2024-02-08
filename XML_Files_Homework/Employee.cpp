//
// Created by damya on 7.2.2024 г..
//

#include "Employee.h"


Employee::Employee(const string &name, const string &type, int age, const Workstation &work) : name(name), type(type),
                                                                                               age(age), work(work) {}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

const string &Employee::getType() const {
    return type;
}

void Employee::setType(const string &type) {
    Employee::type = type;
}

int Employee::getAge() const {
    return age;
}

void Employee::setAge(int age) {
    Employee::age = age;
}

const Workstation &Employee::getWork() const {
    return work;
}

void Employee::setWork(const Workstation &work) {
    Employee::work = work;
}


void Employee::displayInfo() {

        cout << "Name: " << name << ", Type: " << type << ", Age: " << age;
        cout << ", Workstation: Building " <<work.getBuilding();
        cout << ", Floor " << work.getFloor();
        cout << ", Desc " << work.getDesc() << endl;
    }
