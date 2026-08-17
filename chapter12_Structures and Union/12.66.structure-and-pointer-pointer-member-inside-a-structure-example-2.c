/*
 * Program 12.66: Structure and Pointer - Pointer Member Inside a Structure - Example 2
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
    char *name;
    int age;
} demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    demo *d = malloc(sizeof(demo));

    d->age = 18;
    d->name = "John Doley";

    printf("Name: %s\t age=%d\n", d->name, d->age);

    d->name[0] = 'S';                    // Undefined behavior
    printf("Name: %s\t age=%d\n", d->name, d->age);

    strcpy(d->name, "John Pegu");        // Undefined behavior
    printf("Name: %s\t age=%d\n", d->name, d->age);

    free(d);
    return 0;
}
