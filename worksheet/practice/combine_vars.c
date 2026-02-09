#include <stdio.h>

/*
 * Example using different variable types
 * We should use casts to properly combine values and get accurate results
 */

int main( void ) {

    double d = 1.0/3.0;
    float f = 2.3f;
    int k = -7;

    // you can verify sums by comparing to a calculator

    // compute and print d/k as a double to 16 d.p.
    double ansA = d/k; printf("%.16f\n", ansA);
    // compute and print f-d as a double to 16 d.p.
    double ansB = f-d; printf("%.16f\n", ansB);
    // compute and print f-d as a float to 16 d.p.
    float ansC = f-d; printf("%.16f\n", ansC);
    // compute and print k+d as a double to 16 d.p.
    double ansD = k+d; printf("%.16f\n", ansD);

    return 0;
}