//
// Created by damya on 4.2.2024 г..
//

#include "Employee.h"

Employee::Employee(string firstName, string lastName, string position)
        : User(firstName, lastName, position) {
}

string Employee::getFirstName() const {
    return User::getFirstName();
}

void Employee::setFirstName(string name) {
    User::setFirstName(name);
}

string Employee::getLastName() const {
    return User::getLastName();
}

void Employee::setLastName(string lastName) {
    User::setLastName(lastName);
}

string Employee::getPosition() const {
    return User::getPosition();
}

void Employee::setPosition(string position) {
    User::setPosition(position);
}

vector<Tasks>& Employee::getEmplTasks() {
    return emplTasks;
}

void Employee::setTaskStatus(Tasks task, Tasks::StatusProgress stat) {
    bool found = false;
    for (auto it = emplTasks.begin(); it != emplTasks.end(); ++it) {
        if (task.getName() == it->getName()) {
            it->setProgress(stat);
            if (stat == Tasks::StatusProgress::COMPLETED || stat == Tasks::StatusProgress::CANCELLED) {
                // Remove the task from the employee's task list
                emplTasks.erase(it);
            }
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Invalid Task: " << task.getName() << endl;
    }
}

void Employee::displayTasks() const {
    for (const Tasks& currentTask : emplTasks) {
        cout << "Current task: " << endl;
        cout << "Task name: " << currentTask.getName() << endl;
        cout << "Task status: " << currentTask.taskStatusProgressToString(currentTask.getProgress()) << endl;
        cout << endl;
    }
}

void Employee::displayInfo() {
    cout << "Employee's Info:" << endl;
    cout << "First name: " << getFirstName() << "\n";
    cout << "Last name: " << getLastName() << "\n";
    cout << "Position: " << getPosition() << "\n";
}