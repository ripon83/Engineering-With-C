/*
 * Program 12.64: Structure and Pointer - Using malloc with a Structure Pointer
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    demo *d = malloc(sizeof(demo));

    d->age = 18;
    strcpy(d->name, "John Doley");

    printf("Name: %s\t age=%d\n", d->name, d->age);

    free(d);
    return 0;
}
