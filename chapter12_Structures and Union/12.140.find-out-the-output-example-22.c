/*
 * Program 12.140: Find out the output - Example 22
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
    Demo a[3]={{1,2},{3,4},{5,6}};
    Demo *p=a;

    printf("%d\n", (p+1)->x+(p+2)->y);
    return 0;
}
