/*
 * Program 12.49: Accessing the members of a union - A practical example
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union value
{
    int number;
    float decimal;
    char character;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union value v;

    v.number = 100;
    printf("Number: %d\n", v.number);

    v.decimal = 3.14f;
    printf("Decimal: %.2f\n", v.decimal);

    v.character = 'A';
    printf("Character: %c\n", v.character);

    return 0;
}
