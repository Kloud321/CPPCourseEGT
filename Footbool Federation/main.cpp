#include <iostream>

#include "User.h"
#include "Team.h"
#include "Schedule.h"
#include "Refer.h"
#include "Administration.h"
#include <vector>

int main() {
    vector <Team> teams; //& if we want to modify this vector - > the original


    /// Class Administration creation
    Administration bgFootballAdministration("BFF", "abcdf", "Bulgarian Football Fedration",
                                            "Peikov 10", "Sofia", teams);

    /// Team Creation
    Team team1("Levski Sofia", "Stanimir Stoilov");

    Team team2("CSKA Sofia", "Georgi Popov");

    Team team3("Litex", "Pesho Popov");

    Team team4("Loko Plovdiv", "Sasha Iliev");

    Team team5("Beroe", "Ilia Petev");

    Team team6("Slavia", "Nikolay Velev");

    // ----------------------------//

    /// Filling teams

    bgFootballAdministration.addTeam(team1);
    bgFootballAdministration.addTeam(team2);
    bgFootballAdministration.addTeam(team3);
    bgFootballAdministration.addTeam(team4);
    bgFootballAdministration.addTeam(team5);
    bgFootballAdministration.addTeam(team6);

    /// Modifying Team

    bgFootballAdministration.modifyTeamCoach("Beroe", "Sasha Ilich");

    /// Displaying info about teams

    for (Team team : bgFootballAdministration.getTeams()) {
        team.printInfo();
    }

    /// Refer Creation with all valid passwords
    Refer ref1("ref1", "sadasd", "Georgi", "Abadjiev", 35);
    Refer ref2("ref2", "sadasd", "Pesho", "Peshev", 24);
    Refer ref3("ref3", "sad1231", "Ivan", "Ivanov", 34);

    /// Adding referee to the federation object
    bgFootballAdministration.addReferee(ref1);
    bgFootballAdministration.addReferee(ref2);
    bgFootballAdministration.addReferee(ref3);

    for (int i = 0; i < bgFootballAdministration.getRefereeList().size(); ++i) {
        bgFootballAdministration.getRefereeList().at(i).printInfo();
    }

    /// Creating a schedule through the Administration class
    bgFootballAdministration.createSchedule(1, "2024-01-30", "18:00", "Georgi Asparuhov", team1, team2, ref1);
    bgFootballAdministration.createSchedule(2, "2024-02-05", "20:00", "Vasil Levski", team3, team4, ref2);
    bgFootballAdministration.createSchedule(3, "2024-03-05", "21:00", "Vasil Levski", team5, team6, ref3);

    ///Adding Schedule to vector schedules

    bgFootballAdministration.displaySchedulesByMonth();

    /// Simulating games and updating team info
    for(Schedule sch : bgFootballAdministration.getSchedules()){
        sch.printInfo();
        bgFootballAdministration.playMatch(sch.getTeamHome(), sch.getTeamAway());

    }

    for (Team team : bgFootballAdministration.getTeams()) {
        team.printInfo();
    }

    /// Displaying rankings
    bgFootballAdministration.getRankings(bgFootballAdministration.getTeams());


    return 0;
}
