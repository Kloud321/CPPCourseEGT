//
// Created by damya on 8.1.2024 г..
//

#ifndef OBJECTSC___CLASS_H
#define OBJECTSC___CLASS_H

#include <iostream>
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include <string>

class Class {
public:
    Class(string,  Teacher& teacher, int);
    void addStudent(Student& student);
    void classInfo();
    void setClassID();
    int getCLassId();

private:
    string className;
    Teacher classTeacher;
    int classId;
    vector<Student> students;
};


#endif //OBJECTSC___CLASS_H
