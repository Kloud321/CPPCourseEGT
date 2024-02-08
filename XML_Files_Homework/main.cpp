#include <iostream>
#include "pugixml.h" // Include the correct header file
#include "Employee.h"
using namespace std;
using namespace pugi;

void parseXMLAndCreateEmployees(const string& filename, vector<Employee*>& employees) {
    xml_document doc;
    if (!doc.load_file(filename.c_str())) {
        cerr << "Failed to load XML file." << endl;
        return;
    }

    xml_node employeesNode = doc.child("EmployeesData").child("Employees");
    for (xml_node_iterator it = employeesNode.begin(); it != employeesNode.end(); ++it) {
        string name = it->attribute("Name").value();
        string type = it->attribute("type").value();
        int age = it->attribute("Age").as_int();

        xml_node workstationNode = it->child("Workstation");
        if (workstationNode) {
            string building = workstationNode.attribute("Building").value();
            string floor = workstationNode.attribute("Floor").value();
            string desc = workstationNode.attribute("Desc").value();
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

     // Func accept xml file and vector of empl -> we read the file, making a class empl. and pushing it back to the vector
     // where we store our information. After that we display info about each employee iterating through the vector
    parseXMLAndCreateEmployees("Employee.xml", employees);
    displayEmployees(employees);

    // Cleaning memory
    for (auto& employee : employees) {
        delete employee;
    }

    return 0;
}
