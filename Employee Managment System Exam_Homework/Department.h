//
// Created by damya on 31.1.2024 г..
//

#ifndef EMPLOYEE_MANAGMENT_SYSTEM_DEPARTMENT_H
#define EMPLOYEE_MANAGMENT_SYSTEM_DEPARTMENT_H

#include <string>
#include <iostream>
#include <vector>
#include "Employee.h"

using namespace std;

class Department {
public:
    Department(const string &name);
    void addEmployee(Employee*);
    void displayEmployees();
    int getEmplCount();

private:
    string name;
    vector<Employee* > employeeList; // arrays are static so i will use vectros
    int emplCount; // we can check the lenght of the employeeList;
};


#endif //EMPLOYEE_MANAGMENT_SYSTEM_DEPARTMENT_H
