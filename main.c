#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void isTeenager() {
    int age = 19;

    if (age >= 20) {
        printf("You are no longer a teenager\n");
    } else if (13 <= age && age < 20) {
        printf("You are a teenager\n");
    } else if (12 >= age && age >= 0) {
        printf("You are not yet a teenager\n");
    } else {
        printf("Seriously?");
    }

    printf("You are %d years old\n", age);
}

void usingPointers() {
    int value = 5;
    int *pt = &value;

    printf("The value of v is %d\n", value);
    printf("The value of the pointer is %p\n", pt);
    printf("The value pointed by the pointer is %d\n", *pt);

    // You can change the value held by referencing the value directly or by using its pointer
    *pt = 10;
    printf("The value of v has been changed to %d\n", value);
    value = 15;
    printf("The value of v has been changed to %d\n", value);
}

void usingArrays() {
    int nums[5]; // Declare an array with five elements
    nums[0] = 7;
    nums[1] = 8;
    nums[2] = 9;
    printf(nums);
    printf("The first value in the array is %d\n", nums[0]);

}

void makeAnArray() {
    int length;
    printf("How many elements would you like in your array?: ");

    scanf("%d", &length);
    int nums[length];

    for (int i = 0; i < length; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Thanks");
}

void usingStrings() {
    char *string = "This is a string in "; // Assign start of string

    // Allocate memory with size of start of string + "C"
    char *tmp_string = malloc(sizeof(char) * (strlen(string) + strlen("C") + 1));

    // sprintf return total number of characters in string excluding null character at end
    // The string "This is a string in C" is stored into tmp_string instead of printing
    sprintf(tmp_string, "%s%s", string, "C");

    // Move tmp_str to string
    string = tmp_string;

    // Output string to the console
    printf("%s", string);


}
int main() {
    usingStrings();
}
