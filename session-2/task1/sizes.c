
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    printf("char size is %ld bytes\n",  sizeof(char));
    printf("short int size is %ld bytes\n",   sizeof(short int));
    printf("int size is %ld bytes\n",   sizeof(int));
    printf("long int size is %ld bytes\n\n",   sizeof(long int));

    printf("float size is %ld bytes\n", sizeof(float));
    printf("double size is %ld bytes\n", sizeof(double));
    printf("long double size is %ld bytes\n", sizeof(long double));
    
    return 0;
}
