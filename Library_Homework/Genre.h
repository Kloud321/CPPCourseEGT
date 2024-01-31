// Genre.h
#ifndef EXAMPERPBOOK_GENRE_H
#define EXAMPERPBOOK_GENRE_H

#include <string>

using namespace std;

class Genre {
public:
    // Enumeration to represent the predefined genres
    enum Type {
        CLASSIC,
        KIDS,
        FANTASY,
        BIOGRAPHICAL,
        ROMANCE,
    };

    // Constructor
    Genre(Type genreType);

    // Accessor method
    Type getGenreType() const;

    // Convert genre type to string
    static string genreTypeToString(Type genreType);

private:
    Type genreType;
};

#endif //EXAMPERPBOOK_GENRE_H
