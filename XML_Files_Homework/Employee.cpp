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

void Employee::addEmpl(Employee *emp) {
    emplList.push_back(emp);
}

void Employee::displayInfo(std::vector<Employee*> empl) {

//     Print out the employees and their workstations
    for ( Employee* employee : emplList) {
        cout << "Name: " << employee->getName() << ", Type: " << employee->getType() << ", Age: " << employee->getAge();
        cout << ", Workstation: Building " << employee->getWork().getBuilding();
        cout << ", Floor " << employee->getWork().getFloor();
        cout << ", Desc " << employee->getWork().getDesc() << endl;
    }
}