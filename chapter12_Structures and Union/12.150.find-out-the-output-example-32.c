/*
 * Program 12.150: Find out the output - Example 32
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

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo a={5,10};
    Demo b={2,4};

    Demo *p=&a;

    p->x=b.x+p->y;
    p->y=b.y+p->x;

    printf("%d\t%d\n",a.x,a.y);

    return 0;
}
