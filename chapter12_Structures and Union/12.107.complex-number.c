/*
 * Program 12.107: Complex Number
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

void set(complex *comp)
{
    srand(clock());
    comp->real=rand()%10+1;
    comp->img=rand()%10+1;
}

void show(complex comp)
{
    printf("The complex number is: ");
    printf("%d+%di", comp.real, comp.img);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    complex comp;
    set(&comp);
    show(comp);
    return 0;
}
