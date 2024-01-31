#include <iostream>
#include "Car.h"
#include "LuxuryCars.h"
#include "FamilyCar.h"
#include <vector>
int main() {

    vector<Car *> cars;

    Car *sPtr1 = new FamilyCar("BMW", "E61", "SportWagen", "MonacoBlue", 1232, 9999, 10.0, 231);
    Car *sPtr2 = new LuxuryCars("Audi", "A4", "SportWagen", "Black", 1232, 8888, 5.0, 312, 2);

    cars.push_back(sPtr1);
    cars.push_back(sPtr2);

    for (int i = 0; i < cars.size(); i++) {
        cars.at(i)->printInfo();

        // Check if the current object is of type LuxuryCars
        if (LuxuryCars *luxuryCar = dynamic_cast<LuxuryCars*>(cars.at(i))) {
            luxuryCar->chooseProduct(2); // Choose Champagne, Wine, or Chocolate (1, 2, or 3)

            // Check if the product is chosen before calculating and printing the cost
            if (!luxuryCar->getProduct().empty()) {
                cout << "Cost for Luxury Car: " << luxuryCar->cost() << endl;
                cout << "Additional Tax: " << luxuryCar->getAdditionalTax() << endl;
            } else {
                cerr << "Product not chosen. Cost calculation is not valid." << endl;
            }
        } else {
            cout << "Cost for Family Car: " << cars.at(i)->cost() << endl;
            cout << endl;
        }
    }

    // Clean up memory
    for (int i = 0; i < cars.size(); i++) {
        delete cars.at(i);
    }

    return 0;
}

