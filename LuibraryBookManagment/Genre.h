//
// Created by damya on 21.1.2024 г..
//

#ifndef LUIBRARYBOOKMANAGMENT_GENRE_H
#define LUIBRARYBOOKMANAGMENT_GENRE_H
#include "string"

using namespace std;

class Genre {
public:
    enum GenresType {
    CLASSIC,
    KIDS,
    FANTASY,
    BIOGRAPHICAL,
    ROMANCE
    };

    Genre (GenresType);

    GenresType getGenresType();

    // Convert genre type to string
    static string genreTypeToString(GenresType);

private:
GenresType genres;
};


#endif //LUIBRARYBOOKMANAGMENT_GENRE_H
