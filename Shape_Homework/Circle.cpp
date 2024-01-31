//
// Created by damya on 29.1.2024 г..
//

#include "Circle.h"
Circle::Circle(int size) : shape(size) {

}

void Circle::draw() {
    int circle_radius = this->getSize();
    // Used code from https://cplusplus.com/forum/beginner/62634/
    for (int i = 0; i <= 2*circle_radius; i++) {
        for (int j = 0; j <= 2*circle_radius; j++) {
            float distance_to_centre = sqrt((i - circle_radius)*(i - circle_radius) + (j - circle_radius)*(j - circle_radius));
            if (distance_to_centre > circle_radius-0.5 && distance_to_centre < circle_radius+0.5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}



