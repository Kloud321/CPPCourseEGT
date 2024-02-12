//
// Created by damya on 7.2.2024 г..
//

#ifndef XMLFIX_EMPLOYEE_H
#define XMLFIX_EMPLOYEE_H
#include <iostream>
#include <vector>
#include "Workstation.h"

using std::cout;
using std::endl;
using std::string;

class Employee {
public:
    Employee(const string &name, const string &type, int age, const Workstation &work);

    const string &getName() const;

    void setName(const string &name);

    const string &getType() const;

    void setType(const string &type);

    int getAge() const;

    void setAge(int age);

    const Workstation &getWork() const;

    void setWork(const Workstation &work);

    void addEmpl(Employee*);

    void displayInfo();

private:
    string name;
    string type;
    int age;
    Workstation work;

};


#endif //XMLFIX_EMPLOYEE_H
