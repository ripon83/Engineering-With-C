/*
 * Program 12.62: Drawbacks of Union - Example 4
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a union used by the program.
union demo
{
    int x;
    double y;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union demo d={.x=8, .y=2.5};
    printf("%d", d.x);
    return 0;
}
