//
// Created by damya on 8.1.2024 г..
//

#include "Discipline.h"
#include <iostream>

Discipline::Discipline(string name, int lcount, int ecount){

    this->name = name;
    this->lectureCount=lcount;
    this->exercisesCount=ecount;
};


void Discipline::printInfoDiscipline() {
    cout << this->name << ' ' << this-> lectureCount << ' ' << this->exercisesCount<< endl;
}