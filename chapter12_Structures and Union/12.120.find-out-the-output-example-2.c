/*
 * Program 12.120: Find out the output - Example 2
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

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    Demo d1={10};
    Demo d2=d1;
    d2.x=50;   
    printf("%d\t %d\n", d1.x, d2.x);
    return 0;
}
