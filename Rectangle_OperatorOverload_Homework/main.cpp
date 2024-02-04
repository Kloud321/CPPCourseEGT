//
// Created by damya on 2.2.2024 г..
//

#include "Rectangle.h"


int main(){

    Rectangle rec1(5.5, 10.5);
    Rectangle rec2(6.5, 10.5);

    rec1.displayInfo();

    bool result;

    result = rec1 < rec2;

    cout << (result ? "true" : "false") << endl;

    result = rec1 > rec2;

    cout << (result ? "true" : "false") << endl;

    result = rec1 == rec2;

    cout << (result ? "true" : "false") << endl;




    return 0;
}