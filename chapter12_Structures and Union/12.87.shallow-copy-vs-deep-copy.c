/*
 * Program 12.87: Shallow Copy vs Deep Copy
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a structure used by the program.
typedef struct
{
    char *name;
}Demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d1;
    d1.name=malloc(20);
    strcpy(d1.name, "Jibon");

    Demo d2=d1;              // Shallow copy

    return 0;
}
