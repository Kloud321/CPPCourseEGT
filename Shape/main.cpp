#include <iostream>
#include "TwoDimensionalShape.h"
#include "ThreeDemensionalShape.h"
#include "Shape.h"
#include "Circle.h"
#include <vector>

using namespace std;
int main() {
    TwoDimensionalShape *sPtr1 = new Circle(30, 2, "Circle", '*', 3.13);
    TwoDimensionalShape *sPtr2 = new Circle(40, 3, "Circle", ']', 0.34);
    TwoDimensionalShape *sPtr3 = new TwoDimensionalShape(40, 3, "Circle", ']');

    vector<Shape *> myShapes;

    myShapes.push_back(sPtr1);
    myShapes.push_back(sPtr2);
    myShapes.push_back(sPtr3);

    for (int i = 0; i < myShapes.size(); i++) {
        myShapes.at(i)->print();
//        cout << "Area: " << myShapes.at(i)->getArea() << endl;
        TwoDimensionalShape *twoDShapePtr = dynamic_cast<TwoDimensionalShape*>(myShapes.at(i));
        Circle *circlePtr = dynamic_cast<Circle*>(twoDShapePtr);


        if (twoDShapePtr) {
            cout << "Area: " << twoDShapePtr->getArea() << endl;
            cout << "Character: " << twoDShapePtr->getChar() << endl;
            if(circlePtr){
                cout << "Radius: " << circlePtr->getRadius()<< endl;
            }
            else{
                cout << "Shape doesn't have a radiues" << endl;
            }
            // You can use twoDShapePtr to access TwoDimensionalShape-specific members
        } else {
            cout << "Not a TwoDimensionalShape" << endl;
        }

    }

    // Clean up memory
    for (auto shape : myShapes) {
        delete shape;
    }

    return 0;
}



