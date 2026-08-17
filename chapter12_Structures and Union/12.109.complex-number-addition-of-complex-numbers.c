/*
 * Program 12.109: Complex Number - Addition of Complex Numbers
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
    int real, img;
}complex;

void set(complex *comp)
{
    srand(clock());
    comp->real=rand()%10+1;
    comp->img=rand()%10+1;
}

void show(complex comp)
{
    printf("\t%d + %di\n", comp.real, comp.img);
}

void add(complex *res, complex c1, complex c2)
{
    res->real=c1.real+c2.real;
    res->img=c1.img+c2.img;
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    complex c1, c2, c3;

    set(&c1);           // Initialize c1
    set(&c2);           // Initialize c2

    show(c1);           // Display c1
    show(c2);           // Display c2

    add(&c3, c1, c2);   // Add c1 and c2

    printf("      ===========\n");
    show(c3);           // Display the resultant complex number

    return 0;
}
