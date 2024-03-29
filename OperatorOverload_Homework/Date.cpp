//
// Created by damya on 28.1.2024 г..
//

// Date class member-function definitions.
#include <iostream>
#include "Date.h"

// initialize static member at file scope; one classwide copy
const int Date::days[] =
        { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Date constructor
Date::Date( int m, int d, int y )
{
    setDate( m, d, y );
} // end Date constructor

// set month, day and year
void Date::setDate( int mm, int dd, int yy )
{
    month = ( mm >= 1 && mm <= 12 ) ? mm : 1;
    year = ( yy >= 1900 && yy <= 2100 ) ? yy : 1900;

    // test for a leap year
    if ( month == 2 && leapYear( year ) )
        day = ( dd >= 1 && dd <= 29 ) ? dd : 1;
    else
        day = ( dd >= 1 && dd <= days[ month ] ) ? dd : 1;
} // end function setDate

// overloaded prefix increment operator
Date &Date::operator++()
{
    helpIncrement(); // increment date
    return *this; // reference return to create a lvalue
} // end function operator++

// overloaded postfix increment operator; note that the
// dummy integer parameter does not have a parameter name
Date Date::operator++( int )
{
    Date temp = *this; // hold current state of object
    helpIncrement();

    // return unincremented, saved, temporary object
    return temp; // value return; not a reference return
} // end function operator++

// add specified number of days to date
const Date &Date::operator+=( int additionalDays )
{
    for ( int i = 0; i < additionalDays; i++ )
        helpIncrement();

    return *this; // enables cascading
} // end function operator+=

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear( int testYear ) const
{
    if ( testYear % 400 == 0 ||
         ( testYear % 100 != 0 && testYear % 4 == 0 ) )
        return true; // a leap year
    else
        return false; // not a leap year
} // end function leapYear

// determine whether the day is the last day of the month
bool Date::endOfMonth( int testDay ) const
{
    if ( month == 2 && leapYear( year ) )
        return testDay == 29; // last day of Feb. in leap year
    else
        return testDay == days[ month ];
} // end function endOfMonth

// function to help increment the date
void Date::helpIncrement()
{
    // day is not end of month
    if ( !endOfMonth( day ) )
        day++; // increment day
    else
    if ( month < 12 ) // day is end of month and month < 12
    {
        month++; // increment month
        day = 1; // first day of new month
    } // end if
    else // last day of year
    {
        year++; // increment year
        month = 1; // first month of new year
        day = 1; // first day of new month
    } // end else
} // end function helpIncrement

// overloaded output operator
ostream &operator<<( ostream &output, const Date &d )
{
    static char *monthName[ 13 ] = { "", "January", "February",
                                     "March", "April", "May", "June", "July", "August",
                                     "September", "October", "November", "December" };
    output << monthName[ d.month ] << "-" << d.day << "-" << d.year;
    return output; // enables cascading
} // end function operator<<



Date &Date::operator--(){
    if (day > 1){
        --day;
    } else {
        if (month > 1)
        {--month;
            day = days[month];
        } else
        {
            --year;
            month = 12;
            day = 31;
        }
    }
    return *this;
}

// Overloaded postfix decrement operator
Date Date::operator--(int)
{
    Date temp = *this;
    --(*this); // Make use of the prefix decrement operator
    return temp;
}

// Overloaded input operator
istream &operator>>(istream &input, Date &d)
{
    int day, month, year;
    char dash1, dash2;

    input >> day >> dash1 >> month >> dash2 >> year;

    if (dash1 == '-' && dash2 == '-')
    {
        d.setDate(month, day, year);
    }
    else
    {
        // Invalid format, set to default date or handle accordingly
        d.setDate(1, 1, 1900);
    }

    return input;
}
