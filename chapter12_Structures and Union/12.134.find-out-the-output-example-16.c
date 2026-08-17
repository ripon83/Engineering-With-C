/*
 * Program 12.134: Find out the output - Example 16
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
void foo()
{
    static Demo d={0};
    d.x++;
    printf("%d\n", d.x);
}

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    for(int i=0; i<10; i++)
        foo();
    return 0;
}
