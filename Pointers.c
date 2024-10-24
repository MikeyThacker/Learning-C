#include <stdio.h>

int pointers() {
    int myValue = 42;
    int *myPointer = &myValue;

    /*
     Pointers
     --------

     int* creates a pointer to a location in memory
        This is treated as if it were an integer
    &myValue is the location of myValue in memory

    *ptr - Look in the address pointed to by ptr
    &v - Get the address at which v is stored
    Compilers can sometimes spot errors, but not all the time so don't rely fully on it
     */


    // Pointer Arithmetic
    int value = 123;

    int *pointer = &value;
    printf("Value at index 0 is: %d\n", *pointer);
    pointer++;
    printf("Value at index 1 is: %d\n", *pointer);
    printf("Value at index 2 is: %d\n", *(pointer + 1));


    return 0;
}
