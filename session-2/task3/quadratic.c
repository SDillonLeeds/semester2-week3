
/*
 * Compute the roots of quadratic equation.
 * We will assume that 2 real roots exist at this point.
 * The equation is specified with 3 real constants a,b,c
 *    a.x^2 + b.x + c = 0
 */

#include <stdio.h>
#include <math.h>


float quadratic(float a, float b, float c, int sign) {
    /*
    q = (-b +/- sqrt(b^2 - 4ac)) / 2a
    */
    float multiplier = -b + (sign * sqrt(
        b*b - 4*a*c
    ));
    float divisor = 2*a;
    return multiplier / divisor;
}


int main( void ) {

    float a = 1.0;
    float b = -5.0;
    float c = 6.0;
    float root1, root2;

    /*
     * Implement the formula for the 2 roots of a quadratic.
     * You can define additional variable for intermediate results to make the code simpler.
     * Print out the final results for the 2 roots as float values.
     */

    root1 = quadratic(a, b, c, -1); //Negative root (Is positive: False)
    root2 = quadratic(a, b, c, +1); //Positive root (Is positive: True)

    
    printf("Results: (%f, %f)\n", root1, root2);

    return 0;
}
