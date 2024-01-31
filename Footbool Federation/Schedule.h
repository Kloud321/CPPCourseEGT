//
// Created by damya on 23.1.2024 г..
//

#ifndef FOOTBOOLFEDERATION_SCHEDULE_H
#define FOOTBOOLFEDERATION_SCHEDULE_H

#include <string>
#include "Refer.h"
#include "Team.h"
using namespace std;

class Schedule {
public:
    Schedule(int, string, string, string, Team, Team, Refer);

    int getRoundOfLegue() const;

    void setRoundOfLegue(int roundOfLegue);

    const string &getDate() const;

    void setDate(const string &date);

    const string &getHour() const;

    void setHour(const string &hour);

    const string &getStadium() const;

    void setStadium(const string &stadium);

    Team &getTeamHome();

    Team &getTeamAway();

    const Refer &getRefer() const;

    void setRefer(const Refer &refer);

    void printInfo();

    string getMonth();

    vector<Schedule> getSchedules();



private:
    int roundOfLegue;
    string date;
    string hour;
    string stadium;
    Team TeamHome;
    Team TeamAway;
    Refer refer;
};


#endif //FOOTBOOLFEDERATION_SCHEDULE_H
