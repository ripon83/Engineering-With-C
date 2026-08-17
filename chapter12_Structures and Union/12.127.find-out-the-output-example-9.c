/*
 * Program 12.127: Find out the output - Example 9
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
    Demo a[]={{5, 10}, {4, 8}, {3, 6}, {1, 7}, {2, 8}};
    Demo *ptr=a;
    ptr=ptr+4;
    printf("%d\t%d\n", ptr->x, ptr->y);
    ptr=ptr-2;
    printf("%d\t%d\n", ptr->x, ptr->y);
    return 0;
}
