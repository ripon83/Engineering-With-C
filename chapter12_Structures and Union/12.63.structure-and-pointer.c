/*
 * Program 12.63: Structure and Pointer
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <string.h>

// Define a structure used by the program.
typedef struct Demo
{
    char name[100];
    int age;
} demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    demo *d;
    d->age = 18;
    strcpy(d->name, "John Doley");
    printf("Name: %s\t age=%d\n", d->name, d->age);
    return 0;
}
