#include <stdio.h>
#include <time.h>

/*
 * Example using different variable types
 */

int main( void ) {

    // define variables for the following data and print something useful about them in each case
    // choose appropriate variable names and data types considering also the range of values that are possible

    // 1. the hour hane of a clock
    unsigned int hourHane;

    // 2. the total population of a country, eg. China has approximately 1.4billion people
    unsigned int countryPopulation = 1.4e9;

    // 3. the number of minutes between a given date/time and the current date/time, either earlier (negative) or in the future (positive)
    time_t duration;

    // 4. the mean temperature in Leeds over a one-year period
    float meanTemperature = 20.0f;

    // 5. a precise GPS location to within 10cm distance
    int loc[2] = {0, 0}; //Fixed-point value. Has precision of 10cm multiplied by 1/10, so that 1 is 10cm.

    // 6. a calculation of pi to 12 decimal places 
    const double pi = 3.141592650900; //I don't know past the 7th dp by heart, I vaguely know the next 4 and not a clue about the 12th LOL

    return 0;
}