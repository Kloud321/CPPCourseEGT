// Manager.cpp
#include "Manager.h"

Manager::Manager(string firstName, string lastName, string position)
        : User(firstName, lastName, position) {
    // Optionally, you can initialize other members or perform additional setup here.
}

string Manager::getFirstName() const {
    return User::getFirstName();
}

void Manager::setFirstName(string fName) {
    User::setFirstName(fName);
}

string Manager::getLastName() const {
    return User::getLastName();
}

void Manager::setLastName(string lName) {
    User::setLastName(lName);
}

string Manager::getPosition() const {
    return User::getPosition();
}

void Manager::setPosition(string position) {
    User::setPosition(position);
}

void Manager::addEmployee(Employee eml) {
    empList.push_back(eml);
}

void Manager::displayInfo() {
    cout << "Manager's Info:" << endl;
    cout << "First name: " << getFirstName() << "\n";
    cout << "Last name: " << getLastName() << "\n";
    cout << "Position: " << getPosition() << "\n";

    cout << "Team info: " << "\n";
    cout << endl;
    for (Employee currentEml: empList) {

        currentEml.displayInfo();
        cout << endl;
    }

}

void Manager::createTaskForEmployee(Tasks &task, Employee &cEmployee) {
    cEmployee.getEmplTasks().push_back(task);
}

void Manager::taskProgressUpdate(Tasks task, Employee empl) {
    if(task.getProgress() == Tasks::StatusProgress::COMPLETED || task.getProgress() == Tasks::StatusProgress::CANCELLED){

        cout << "Task is already completed" << endl;
    }
    else{
        for (Tasks currentTask : empl.getEmplTasks()) {
            if (currentTask.getName() == task.getName()) {
                if (currentTask.getProgress() == Tasks::StatusProgress::COMPLETED) {
                    cout << "Well done! Good job!" << endl;
                } else if (currentTask.getProgress() == Tasks::StatusProgress::POSTPONED) {
                    cout << "Awaiting update why task is not postponed" << endl;
                } else if (currentTask.getProgress() == Tasks::StatusProgress::CANCELLED) {
                    cout << "Awaiting update why task is cancelled" << endl;
                } else if (currentTask.getProgress() == Tasks::StatusProgress::OnHOLD) {
                    cout << "Awaiting update why task is on hold" << endl;
                } else if (currentTask.getProgress() == Tasks::StatusProgress::InPROGRESS) {
                    cout << "Awaiting update why task is not finished" << endl;
                } else {
                    cout << "I am going to review your the task" << endl;
                }
            }
    }

    }
}

vector<Employee> Manager::getEmplist() {

    return empList;
}