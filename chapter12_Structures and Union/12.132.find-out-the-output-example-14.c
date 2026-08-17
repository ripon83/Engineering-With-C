/*
 * Program 12.132: Find out the output - Example 14
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a structure used by the program.
typedef struct
{
    char x[10];
    long y;
}Demo;

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    printf("%ld", sizeof(Demo));
    return 0;
}
