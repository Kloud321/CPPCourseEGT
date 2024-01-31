//
// Created by damya on 31.1.2024 г..
//

#include "Department.h"

Department::Department(const string &name) : name(name), emplCount(0) {}


void Department::addEmployee(Employee *emp) {

    this->employeeList.push_back(emp);
    this->emplCount++;

}

void Department::displayEmployees() {

    for(Employee* empl : this->employeeList){
        cout << "Employee info:" << endl;
        empl->display();
        cout << endl;

    }
    cout << "Employees count in the firm is: "<< getEmplCount() << endl;
}

int Department::getEmplCount() {
    return this->emplCount;
}