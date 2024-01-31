//
// Created by damya on 8.1.2024 г..
//

#ifndef OBJECTSC___TEACHER_H
#define OBJECTSC___TEACHER_H

using namespace std;
#include <string>
#include "Discipline.h"

class Teacher {

public:
    Teacher(string, string, Discipline& discipline);

    void printInfo();

private:
    string name;
    string title;
    Discipline discipline;
};

#endif //OBJECTSC___TEACHER_H
