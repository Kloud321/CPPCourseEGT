//
// Created by damya on 8.1.2024 г..
//
using namespace std;
#include "Class.h"

Class::Class(string className, Teacher& teacher, int classId) : className(className), classTeacher(teacher), classId(classId){
    // Initialize the class's name and teacher when a new object of Class is created

}

void Class::addStudent(Student& student) {
    students.push_back(student); // Add a student to the class
}

void Class::classInfo() {
    // Display class information including class name, teacher, and enrolled students
    cout << "Class Name: " << className << endl;
    cout << "Class Teacher: ";
    classTeacher.printInfo(); // Assuming Teacher has a printInfo() function

    for (int i = 0; i < students.size(); ++i) {
        cout << "Student Name: " << students[i].getName() << " | Class Number: " << classId << endl;
    }
}