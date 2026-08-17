/*
 * Program 12.138: Find out the output - Example 20
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    int x;
    int y;
}Demo;

void change(Demo *d)
{
    d->x=d->x+d->y;
    d->y=d->x-d->y;
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d={10,20};
    change(&d);

    printf("%d\t%d\n", d.x, d.y);
    return 0;
}
