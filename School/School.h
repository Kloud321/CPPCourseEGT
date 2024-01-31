#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>
#include <vector>
#include "Class.h"

class School {
private:
    std::vector<Class> classes;

public:
    School(); // Constructor

    void addClass(Class& newClass);
    void printSchoolInfo();

    // Other functionalities related to managing classes in the school
};

#endif // SCHOOL_H
