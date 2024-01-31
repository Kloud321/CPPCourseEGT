//
// Created by damya on 8.1.2024 г..
//

#ifndef OBJECTSC___STUDENT_H
#define OBJECTSC___STUDENT_H
using namespace std;
#include <string>

class Student {
public:
    Student(string, int);

    void setName(string);
    void setID(int);
    string getName();
    int getID();
    void printInfo();

private:
    string name;
    int id;
    };



#endif //OBJECTSC___STUDENT_H
