#include <iostream>
#include "pugixml.h" // Include the correct header file
#include "Employee.h"
using namespace std;
using namespace pugi;

int main() {
     vector<Employee*> employees;

    xml_document doc;
    if (!doc.load_file("Employee.xml")) {
        cerr << "Failed to load XML file." << endl;
        return -1;
    }

    xml_node employeesNode = doc.child("EmployeesData").child("Employees");

    for (xml_node_iterator it = employeesNode.begin(); it != employeesNode.end(); ++it) {

        string name = it->attribute("Name").value();
        string type = it->attribute("type").value();
        int age = it->attribute("Age").as_int();

        string work = it->child("Workstation").value();

        xml_node workstationNode = it->child("Workstation");
        if (workstationNode) {
            string building = workstationNode.attribute("Building").value();
            string floor = workstationNode.attribute("Floor").value();
            string desc = workstationNode.attribute("Desc").value();
            Employee epl(name, type, age, Workstation(building, floor, desc));

            epl.addEmpl(&epl);
            epl.displayInfo(employees);
        }

        cout << endl; // Add a newline to separate each employee
    }

    return 0;
}
