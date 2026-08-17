/*
 * Program 12.80: Static Array Using Structure using function
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
    int arr[10];
    int size;
}demo;

void populate(demo *d, int n)
{
    srand(clock());
    d->size=n;

    for(int i=0; i<d->size; i++)
        d->arr[i]=rand()%10;
}

void show(demo *d)
{
    for(int i=0; i<d->size; i++)
        printf("%d\t", d->arr[i]);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    demo d1;
    demo d2;

    populate(&d1, 10);
    populate(&d2, 12);       // Error: arr can hold only 10 elements

    printf("The d1's array is:\n");
    show(&d1);

    printf("\nThe d2's array is:\n");
    show(&d2);

    return 0;
}
