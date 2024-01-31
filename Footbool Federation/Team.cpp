//
// Created by damya on 23.1.2024 г..
//

#include "Team.h"

Team::Team(string name, string coach) :
           name(name), coach(coach){
    this->wins=0;
    this->loses=0;
    this->draws=0;
    this->points=0;
}

string Team::getName() {
    return name;
}

void Team::setName(string name) {
    Team::name = name;
}

string Team::getCoach() {
    return coach;
}

void Team::setCoach( string coach) {
    Team::coach = coach;
}

int Team::getWins()  {
    return wins;
}

int Team::getLoses() {
    return loses;
}


int Team::getDraws() {
    return draws;
}

int Team::getPoints()  {
    return points;
}

//Rankings Team::getRankings(Rankings rankList)  {
//    return rankList;
//}

// Team.cpp

// Implement these methods in your Team.cpp file

void Team::addWin() {
    this->wins++;
    this->points +=3;
}

void Team::addLoss() {
    this->loses++;
}

void Team::addDraw() {
    this->draws++;
    this->points +=1;
}


void Team::printInfo() {
    cout<< "------------------------" << endl;
    cout << "Team Name: " << this->getName() << endl;
    cout << "Coach Name: " << this->getCoach() << endl;
    cout << "Team Points: " << this->getPoints() << endl;
    cout << "Team Wins: " << this->getWins() << endl;
    cout << "Team loses: " << this->getLoses() << endl;
    cout << "Team draws: " << this->getDraws() <<endl;
//    cout << "Team position in ranklist: " << this->getRankings() <<endl;
    cout << "--------------------------" << endl;

}