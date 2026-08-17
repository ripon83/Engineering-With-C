/*
 * Program 12.121: Find out the output - Example 3
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a structure used by the program.
typedef struct
{
    int x;
}Demo;
// Define a structure used by the program.
typedef struct
{
    Demo d;
}NDemo;

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    NDemo d1={{10}};
    NDemo d2=d1;
    printf("%d\n", d2.d.x);
    return 0;
}
