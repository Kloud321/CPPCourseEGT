//
// Created by damya on 13.1.2024 г..
//

#include "MovieFinder.h"
// MovieFinder.cpp
#include <iostream>
#include "MovieFinder.h"

void findMovie(const std::vector<Hall>& halls, const std::string& movieName) {
    for (int i = 0; i < halls.size(); i++) {
        Hall currentHall = halls.at(i);
        vector<Screening> src = currentHall.getScreeningList();
        for (int j = 0; j < src.size(); j++) {
            Screening scrObj = src.at(j);
            string currenMovieName = src.at(j).getMovieName();
            if (movieName == currenMovieName) {
                cout << " We found projection " << src.at(j).getMovieName() << endl;
            }

        }
    }

};