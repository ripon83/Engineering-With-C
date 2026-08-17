/*
 * Program 12.108: Complex Number - Call-by-value in a Structure
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define a structure used by the program.
typedef struct Complex
{
    int real;
    int img;
}complex;

void set(complex comp)
{
    // Call by value
    srand(clock());
    comp.real=rand()%10+1;  // No modification in main
    comp.img=rand()%10+1;   // No modification in main
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    complex comp;
    set(comp);
    return 0;
}
