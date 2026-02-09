
#include <stdio.h>

/*
 * Example using memory addresses
 */

int main( void ) {

    int k1 = 2.5;    // we define 2 integer variables
    int k2 =  -3.4;

    printf(" %p , %p\n",&k1,&k2);  // we print the memory addresses of both

    // what can you deduce about the memory usage and memory layout from inspecting the addresses?
    //They are beside each other in memory, as float is 4 bytes;
    // - 0x7ffdefca4e30
    // - 0x7ffdefca4e34

    return 0;
}