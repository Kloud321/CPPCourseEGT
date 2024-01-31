// OverNightPackage.h
#ifndef PACKAGE_INHERITANCE_OVERNIGHTPACKAGE_H
#define PACKAGE_INHERITANCE_OVERNIGHTPACKAGE_H

#include "Package.h"

class OverNightPackage : public Package {
public:
    OverNightPackage(double, double, Adress,  Adress, double);

    // Additional functions specific to OverNightPackage, if needed
    double getAdditionalFee();
    void setAdditionalFee(double);
    virtual double calculatePrice() override;


private:
    double additionalFee;
};

#endif // PACKAGE_INHERITANCE_OVERNIGHTPACKAGE_H
