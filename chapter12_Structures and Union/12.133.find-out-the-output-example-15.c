/*
 * Program 12.133: Find out the output - Example 15
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a structure used by the program.
typedef struct
{
    char x[10];
    short y;
// Define a union used by the program.
    union Udemo
    {
        long m;
        int n;
    }udemo;
}Demo;

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    printf("%ld", sizeof(Demo));
    return 0;
}
