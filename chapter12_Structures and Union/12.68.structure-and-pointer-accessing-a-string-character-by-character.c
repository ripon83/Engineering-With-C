/*
 * Program 12.68: Structure and Pointer - Accessing a String Character by Character
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

    for (int i = 0; d->name[i] != '\0'; i++)
        printf("%c", d->name[i]);

    free(d->name);
    free(d);

    return 0;
}
