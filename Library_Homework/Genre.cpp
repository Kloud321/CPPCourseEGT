// Genre.cpp
#include "Genre.h"

Genre::Genre(Type genreType) : genreType(genreType) {}

Genre::Type Genre::getGenreType() const {
    return genreType;
}

string Genre::genreTypeToString(Type genreType) {
    switch (genreType) {
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
