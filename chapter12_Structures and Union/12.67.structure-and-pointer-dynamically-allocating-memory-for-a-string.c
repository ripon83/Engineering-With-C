/*
 * Program 12.67: Structure and Pointer - Dynamically Allocating Memory for a String
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
    d->name = malloc(100);

    strcpy(d->name, "John Doley");

    printf("Name: %s\t age=%d\n", d->name, d->age);

    d->name[0] = 'S';

    printf("Name: %s\t age=%d\n", d->name, d->age);

    strcpy(d->name, "John Pegu");

    printf("Name: %s\t age=%d\n", d->name, d->age);

    free(d->name);
    free(d);

    return 0;
}
