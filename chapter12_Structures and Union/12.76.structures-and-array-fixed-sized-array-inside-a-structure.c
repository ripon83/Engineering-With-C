/*
 * Program 12.76: Structures and Array - Fixed-Sized Array inside a Structure
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
    int arr[10];  // fixed-sized array
    int size;
}demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    demo *d1 = (demo *)malloc(sizeof(demo));
    demo *d2 = (demo *)malloc(sizeof(demo));

    d1->size = 10;

    srand(clock());

    printf("\nThe array for the d1:\n");

    for(int i = 0; i < d1->size; i++)
        d1->arr[i] = rand() % 10;

    for(int i = 0; i < d1->size; i++)
        printf("%d\t", d1->arr[i]);

    printf("\nThe array for the d2:\n");

    d2->size = 10;

    for(int i = 0; i < d2->size; i++)
        d2->arr[i] = rand() % 10;

    for(int i = 0; i < d2->size; i++)
        printf("%d\t", d2->arr[i]);

    return 0;
}
