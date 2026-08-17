/*
 * Program 12.142: Find out the output - Example 24
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
}Point;

// Define a structure used by the program.
typedef struct
{
    Point p;
    int z;
}Demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d={{10,20},30};

    printf("%d\t%d\t%d\n",
           d.p.x,d.p.y,d.z);
    return 0;
}
