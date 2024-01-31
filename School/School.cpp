#include <iostream>
#include <vector>
#include "School.h"

using namespace std;

School::School() {} // Default constructor

void School::addClass(Class& newClass) {
    classes.push_back(newClass);
}

void School::printSchoolInfo() {
    std::cout << "School Information:" << std::endl;
    for (int i = 0; i < classes.size(); i++) {
        cout << "Class info: "; classes[i].classInfo();
    }
}
