//
// Created by damya on 21.1.2024 г..
//

#include "Genre.h"

Genre::Genre(GenresType genres) : genres(genres) {}

Genre::GenresType Genre::getGenresType()  {
    return genres;
}

string Genre::genreTypeToString(GenresType genres) {
    switch (genres) {
        case CLASSIC:
            return "Classic";
        case KIDS:
            return "Kids";
        case FANTASY:
            return "Fantasy";
        case BIOGRAPHICAL:
            return "Biographical";
        case ROMANCE:
            return "Romance";
        default:
            return "No such genre!!!";
    }
}
