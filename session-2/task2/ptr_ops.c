
/*
 * Use the address and dereferencing operators on variables and pointers 
 * Display value and addres data via the variable and then via the pointer
 */

#include <stdio.h>

int main( void ) {

    float testFloat = 3.14;
    float* testFloatPtr;
    float** testFloatPtrPtr;

    testFloatPtr = &testFloat;  // the float pointer (testFloatPtr) is set to the address of the float variable (testFloat)
    testFloatPtrPtr = &testFloatPtr;
    
    printf("The value of the float variable is  %f\n", testFloat);
    printf("The address of the float variable is  %p\n", &testFloat);

    printf("The value of the pointer is  %p\n", testFloatPtr);
    printf("The value that the pointer dereferences to is  %f\n", *testFloatPtr);

    printf("The value of the pointer pointer is  %p\n", testFloatPtrPtr);
    printf("The value that the pointer pointer dereferences to is  %p\n", *testFloatPtrPtr);
    printf("The address of the pointer pointer is  %p\n", &testFloatPtrPtr);
    printf("The address of the float variable via pointer pointer is  %f\n", **testFloatPtrPtr);

    return 0;
}
