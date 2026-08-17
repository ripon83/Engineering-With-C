/*
 * Program 12.139: Find out the output - Example 21
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
    Demo a={10,20};
    Demo b={30,40};

    b=a;
    a.x=100;

    printf("%d\t%d\n", a.x, b.x);
    return 0;
}
