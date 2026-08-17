/*
 * Program 12.155: Find out the error - Example 5
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a structure used by the program.
struct Demo
{
    int x;
    struct Demo d;
};

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    struct Demo d;
    return 0;
}
