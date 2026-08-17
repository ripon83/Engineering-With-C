/*
 * Program 12.1: Declaration and definition
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct demo             // Structure type declaration
{
    int id;
    char name[100];
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct demo obj;    // Structure variable definition
    return 0;
}
