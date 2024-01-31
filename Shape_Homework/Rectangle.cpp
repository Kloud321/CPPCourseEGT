//
// Created by damya on 29.1.2024 г..
//

#include "Rectangle.h"

Rectangle::Rectangle(int size) : shape(size){

}
void Rectangle::draw() {
    int size = getSize();
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}