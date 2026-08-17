/*
 * Program 12.147: Find out the output - Example 29
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

void foo(Demo *p)
{
    p->x++;
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d={5};

    foo(&d);
    foo(&d);
    foo(&d);

    printf("%d\n",d.x);
    return 0;
}
