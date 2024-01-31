//
// Created by damya on 23.1.2024 г..
//

#ifndef FOOTBOOLFEDERATION_TEAM_H
#define FOOTBOOLFEDERATION_TEAM_H
#include <iostream>
#include <string>
#include "vector"

using namespace std;

class Team {

public:
    Team(string name, string coach);

    string getName();

    void setName(string name);

    string getCoach();

    void setCoach(string coach);

    int getWins();

    int getLoses();

    int getDraws();

    int getPoints();

    void printInfo();

    //---------------------------//

    void addWin();
    void addLoss();
    void addDraw();

    //---------------------------//

private:
    string name;
    string coach;
    int wins;
    int loses;
    int draws;
    int points;
};


#endif //FOOTBOOLFEDERATION_TEAM_H
