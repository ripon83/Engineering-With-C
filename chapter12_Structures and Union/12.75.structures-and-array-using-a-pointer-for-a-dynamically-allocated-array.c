/*
 * Program 12.75: Structures and Array - Using a Pointer for a Dynamically Allocated Array
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Define a structure used by the program.
typedef struct Demo
{
    int *arr;
    int size;
}demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    demo *d = (demo *)malloc(sizeof(demo));

    d->size = 10;
    d->arr = (int *)malloc(sizeof(int) * d->size);

    srand(clock());

    for(int i = 0; i < d->size; i++)
        d->arr[i] = rand() % 10;

    for(int i = 0; i < d->size; i++)
        printf("%d\t", d->arr[i]);

    return 0;
}
