//
// Created by damya on 4.2.2024 г..
//

#ifndef TODOLIST_EMPLOYEE_H
#define TODOLIST_EMPLOYEE_H
#include "User.h"
#include "Task.h"

class Employee : public User{

public:
    Employee(string, string, string);

    string getFirstName() const;
    void setFirstName(string fName);

    string getLastName() const;
    void setLastName(string lName);

    string getPosition() const;
    void setPosition(string position);

    void virtual displayInfo() override;

    vector<Tasks>& getEmplTasks();  // Updated this function

    void setTaskStatus(Tasks task, Tasks::StatusProgress stat);
    void displayTasks() const;

private:
    vector<Tasks> emplTasks;
    vector<Tasks> emplFinishedTasks;
};


#endif //TODOLIST_EMPLOYEE_H
