/* hello.c */
//Prints "Hello World" to the console.

#include <stdio.h> //Like import from py. This lets us use printf().

int main() { //Must have a main function, this is called when the program is run.
    const char* text = "Hello World\n"; //C equiv. to std::string.
    printf("%s", text); //Show in console

    return 0; //Exit code of 0 (No issues)
} //Fancy brackets rather than indentation alone. Indentation optional.

//.o(bject) file is 15,960B (16kB).