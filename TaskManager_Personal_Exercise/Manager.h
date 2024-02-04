//
// Created by damya on 4.2.2024 г..
//

#ifndef TODOLIST_MANAGER_H
#define TODOLIST_MANAGER_H
#include <string>
#include <vector>
#include "Employee.h"

using namespace std;

class Manager: public User {
public:
    Manager(string, string, string);

    string getFirstName() const;
    void setFirstName(string fName);

    string getLastName() const;
    void setLastName(string lName);

    string getPosition() const;
    void setPosition(string position);

    void virtual displayInfo() override;

    void addEmployee(Employee);

    void createTaskForEmployee(Tasks&, Employee&);
    void taskProgressUpdate(Tasks, Employee);

    vector<Employee> getEmplist();

private:
    vector<Employee > empList;
};


#endif //TODOLIST_MANAGER_H
