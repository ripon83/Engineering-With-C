/*
 * Program 12.69: Structures and Function - Passing a Structure by Value
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    int x, y;
}demo;

void populate(demo p)
{
    p.x=5;
    p.y=10;
}

void show(demo p)
{
    printf("(%d, %d)", p.x, p.y);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    demo d;
    populate(d);
    show(d);
    return 0;
}
