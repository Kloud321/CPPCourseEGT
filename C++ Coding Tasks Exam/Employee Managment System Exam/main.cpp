//
// Created by damya on 31.1.2024 г..
//
#include "Employee.h"
#include "Department.h"

int main(){
    // As task 1 i choose to use vectors cuz they are dynamic not static like arrays and can change their size during runtime.

    // We are creating an obj of class employee
    Employee e1("Ivan", 21, "Developer");
    Employee e2("Ivan 2", 11, "Legal council");

    // We are creating an obj of class department
    Department d1("EGT");

    /// we add the employee to the department with the addEmployee method which push_back an Employee to vector of obj of type Employess
    d1.addEmployee(&e1);
    d1.addEmployee(&e2);

    // Displaying the info for each employee with For Each cycle and then calling the employee method display
    d1.displayEmployees();

    return 0;
}