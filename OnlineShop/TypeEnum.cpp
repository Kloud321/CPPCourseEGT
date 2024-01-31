//
// Created by damya on 22.1.2024 г..
//

#include "TypeEnum.h"

TypeEnum::TypeEnum(AlcohlType types) : types(types){


}


TypeEnum::AlcohlType TypeEnum::getAlcoholType() {

    return types;
}

string TypeEnum::genreTypeToString(AlcohlType types) {
    switch (types) {
        case WINE:
            return "Wine";
        case GIN:
            return "Gin";
        case WHISKEY:
            return "Whiskey";
        case WATER:
            return "Water";
        case JUICE:
            return "Juice";
        case ICETEA:
            return "Ice Tea";
        default:
            return "We don't serve this drink!!!";
    }
}
