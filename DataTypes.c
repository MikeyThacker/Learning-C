int main() {
    // Mostly same data types as python and java
    char character = "A"; // A single character
    int integer = 1; // An integer with size based on word size of machine
    float floating = 3.14; // Single precision floating point number
    double doubled = 3.141592653589793; // Double precision floating point number
    // There is no specific boolean type in C
    // Instead, booleans are implemented and evaluated as integer values

    // Alternate integer types:
    short int shortInt = 1; // A "shorter" version of int, up to 16 bits
    long int longInt = 1; // A "longer" version on int, up to 32 bits
    // Simply: short int <= int <= long int

    // More qualifiers for integer types:
    unsigned int unsignedInt; // Interpret the value as starting from 0
    signed int signedInt; // allow negative numbers
    // Unsigned increases range, but only if you know that the value will not be negative
    // Mixing signed and unsigned integers can cause bugs and issues


    return 0;
}
