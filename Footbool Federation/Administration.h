//
// Created by damya on 23.1.2024 г..
//

#ifndef FOOTBOOLFEDERATION_ADMINISTRATION_H
#define FOOTBOOLFEDERATION_ADMINISTRATION_H

#include <map>
#include "User.h"
#include "Team.h"
#include "Schedule.h"
#include <algorithm>

class Administration : public User {
public:
    Administration(string username, string password, string name, string adress, string city, vector<Team> teams);

    string getName();

    void setName(string name);

    string getAdress();

    void setAdress(string adress);

    string getCity();

    void setCity(string city);

    vector<Team> getTeams();
    vector<Schedule> getSchedules();

    //Administration Methods -------//

    void addTeam(Team);
    void modifyTeamCoach(string, string);
    void removeTeam(Team);

    //-----------------------------//

    void createSchedule(int, string, string, string, Team, Team, Refer);
    void addSchedule(Schedule);
    void addScheduleToMap(Schedule);
    void displaySchedulesByMonth();
    void modifySchedule(Refer, string, string);


    //------------------------------//

    void addReferee(Refer);
    vector<Refer> getRefereeList();

    ///------------------------------////

    void playMatch(Team&, Team&);


    enum MatchResult {
        WIN,
        DRAW,
        LOSS
    };

    void getRankings(vector<Team>);

private:
    string name;
    string adress;
    string city;
    vector<Team> teams;
    vector<Schedule> schedules;
    vector<Refer> refereeList;
    map<string, vector<Schedule>> schedulesByMonth;
};


#endif //FOOTBOOLFEDERATION_ADMINISTRATION_H
