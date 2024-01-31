#include <iostream>
#include "Package.h"
using namespace std;
#include <vector>
#include "OverNightPackage.h"
#include "Package.h"


int main() {
    Adress sender("Sender Name", 123456789, "Sender City", "Sender Street");
    Adress receiver("Receiver Name", 987654321, "Receiver City", "Receiver Street");

    // Create an OvernightPackage object
    Package *packagePtr = new OverNightPackage(2.50, 2.0, sender, receiver, 1.0);
    Package *packagePtr2 = new OverNightPackage(5.00, 2.0, sender, receiver, 3.0);

    // Add the package to the vector
    vector<Package *> myPackages;
    myPackages.push_back(packagePtr);
    myPackages.push_back(packagePtr2);

    // Process the packages in the vector
    for (int i = 0; i < myPackages.size(); i++) {
        // Print package information (you might want to implement a print function in your Package classes)
        cout << "Package Information:" << endl;
        cout << "Price: " << myPackages.at(i)->getPrice() << endl;
        cout << "Weight: " << myPackages.at(i)->getWeight() << endl;
        cout << "Cost: " << myPackages.at(i)->calculatePrice() << endl;

        // Clean up memory
        delete myPackages.at(i);
    }

    // Calculate and print the total cost
    double totalSum = Package::calculateTotalSumForPackages(myPackages);
    cout << "Total Cost for all packages: " << totalSum << endl;

    return 0;
}

