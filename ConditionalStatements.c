#include <stdio.h>

int main() {
    // If, while, and do...while constructs are almost identical to java

    // If statement
    if (2 % 2) {
        // This will not run, as 2 % 2 == 0, and 0 represents False in C
    }

    // For loops
    int i;
    for (i = 0; i < 10; i++) {
        /*
        Some language modes of C do not allow declaration of variables
            inside the loop definition
        */
    }

    // While loops
    int x = 0;
    while (x < 10) {
        x += 1;
    }

    // do... while loops
    int y = 0;
    do {
        y += 1;
    } while (y < 10);

    // Switch statement
    char character = "a";
    switch (character) {
        case 'a': printf("a");
            break;
        case 'b': printf("b");
            break;
        case 'c': printf("c");
            break;
        default:
            printf("error");
    }

    // Mathematical Operators
    // Operational: +, -, *, /, %
    // Comparative: <, >, <=, >=, ==, !=, &&, ||, !
    // Incremental ++i, --i, i++, i--


    return 0;
}
