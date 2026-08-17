/*
 * Program 12.122: Find out the output - Example 4
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
    Demo d1={5, 6};
    Demo *p=&d1;
    Demo d2=*p;
    p->x=10;
    p->y=20;
    printf("%d\t%d\n", d1.x, d1.y);
    printf("%d\t%d\n", d2.x, d2.y);
    return 0;
}
