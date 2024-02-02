//
// Created by damya on 31.1.2024 г..
//

#ifndef EMPLOYEE_MANAGMENT_SYSTEM_EMPLOYEE_H
#define EMPLOYEE_MANAGMENT_SYSTEM_EMPLOYEE_H
#include <string>
#include <iostream>

using namespace std;

class Employee {
public:
    Employee(const string &name, int id, const string &position);

    const string &getName() const;

    void setName(const string &name);

    int getId() const;

    void setId(int id);

    const string &getPosition() const;

    void setPosition(const string &position);

    void display();


private:
    string name;
    int ID;
    string position;

};


#endif //EMPLOYEE_MANAGMENT_SYSTEM_EMPLOYEE_H
