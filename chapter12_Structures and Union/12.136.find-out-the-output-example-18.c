/*
 * Program 12.136: Find out the output - Example 18
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
    Demo d={10,20};
    Demo *p=&d;

    printf("%d\n", p->x+p->y);
    return 0;
}
