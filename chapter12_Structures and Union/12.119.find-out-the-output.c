/*
 * Program 12.119: Find out the output
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a union used by the program.
union Data 
{
    int i;
    float f;
};

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    union Data d;
    d.i = 1065353216;   
    printf("As int: %d\n", d.i);
    printf("As float: %f\n", d.f);
    return 0;
}
