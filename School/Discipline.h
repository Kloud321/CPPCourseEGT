//
// Created by damya on 8.1.2024 г..
//

#ifndef OBJECTSC___DISCIPLINE_H
#define OBJECTSC___DISCIPLINE_H
using namespace std;
#include <string>

class Discipline {
public:
    Discipline(string, int, int);
    void printInfoDiscipline();
private:
    string name;
    int lectureCount;
    int exercisesCount;

};


#endif //OBJECTSC___DISCIPLINE_H
