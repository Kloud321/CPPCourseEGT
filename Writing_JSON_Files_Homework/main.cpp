#include <iostream>
#include <fstream>
#include <vector>
#include "json.h"
#include "Employee.h"

using namespace std;
using json = nlohmann::json;

void parseJSONAndCreateEmployees(const string& filename, vector<Employee*>& employees) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Failed to open JSON file." << endl;
        return;
    }

    json jsonData;
    file >> jsonData;

    for (const auto& employeeData : jsonData["EmployeesData"]) {
        string name = employeeData["name"];
        string type = employeeData["type"];
        int age = employeeData["age"];

        json workstationData = employeeData["Workstation"];
        if (!workstationData.is_null()) {
            string building = workstationData["Building"];
            string floor = workstationData["Floor"];
            string desc = workstationData["Desc"];
            Employee* employee = new Employee(name, type, age, Workstation(building, floor, desc));
            employees.push_back(employee);
        }
    }
}

void displayEmployees(const vector<Employee*>& employees) {
    for (const auto& employee : employees) {
        employee->displayInfo();
        cout << endl;
    }
}

int main() {
    vector<Employee*> employees;

    parseJSONAndCreateEmployees("jsonData.json", employees);
    displayEmployees(employees);

    // Cleaning memory
    for (auto& employee : employees) {
        delete employee;
    }

    return 0;
}



