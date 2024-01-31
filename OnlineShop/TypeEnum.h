//
// Created by damya on 22.1.2024 г..
//

#ifndef ONLINESHOPPOLYMORPHISAMABSTRACTION_TYPEENUM_H
#define ONLINESHOPPOLYMORPHISAMABSTRACTION_TYPEENUM_H
#include <iostream>

using namespace std;

class TypeEnum {
public:
    enum AlcohlType {
        WINE,
        GIN,
        WHISKEY,
        WATER,
        JUICE,
        ICETEA,
    };

    TypeEnum (AlcohlType);

    AlcohlType getAlcoholType();

    // Convert genre type to string
    static string genreTypeToString(AlcohlType);

private:
    AlcohlType types;
};



#endif //ONLINESHOPPOLYMORPHISAMABSTRACTION_TYPEENUM_H
