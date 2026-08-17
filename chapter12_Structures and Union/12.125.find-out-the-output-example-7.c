/*
 * Program 12.125: Find out the output - Example 7
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a structure used by the program.
typedef struct
{
    int x, y;
}Demo;

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    Demo a[2]={{5, 10},{4, 8}};
    Demo tmp=a[0];
    printf("%d\t%d\n", tmp.x, tmp.y);
    tmp.x=50;
    tmp.y=60;
    printf("%d\t%d\n", a[0].x, a[0].y);
    return 0;
}
