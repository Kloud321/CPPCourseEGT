//
// Created by damya on 8.1.2024 г..
//
using namespace std;
#include <iostream>

#include "Teacher.h"
Teacher::Teacher(string name, string title, Discipline& disciple): name(name), discipline(disciple) {

    this->title= title;

}


void Teacher::printInfo() {

    cout << "Teacher name " << this->name << " title " << this->title << " and discipline "; this->discipline.printInfoDiscipline();
    cout << endl;
}