#include <iostream>
#include "Teacher.h"
#include "Discipline.h"
#include "Student.h"
#include "School.h"
#include "Class.h"

int main() {
    Discipline d1("History", 45, 67);
    Teacher t1("Ivan", "Mr", d1);
    Student s1("Kalin", 23);
    Student s2("Malin", 43);
    Class c1("A", t1, 1);
    c1.addStudent(s1);
    c1.addStudent(s2);

    d1.printInfoDiscipline();
    t1.printInfo();
    s1.printInfo();
    s2.printInfo();
//    c1.classInfo();

    School sch1;
    sch1.addClass(c1);

    sch1.printSchoolInfo();

    return 0;
}


//1.We are given a school. In the school there are classes of students.
// Each class has a set of teachers. Each teacher teaches a set of disciplines.
// Students have name and unique class number. Classes have unique text identifier.
// Teachers have name and title. Disciplines have name, number of lectures and number of exercises.
//2. Define C++ classes for the school (School, Class, Student, Teacher, Discipline).
// Keep the member fields private. Add constructors and accessor methods.
// Write a testing class to construct and print a sample school.