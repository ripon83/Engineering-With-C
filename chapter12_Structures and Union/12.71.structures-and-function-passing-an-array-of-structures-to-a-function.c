/*
 * Program 12.71: Structures and Function - Passing an Array of Structures to a Function
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define a structure used by the program.
typedef struct
{
    int x, y;
}point;

void populate(point *p, int n)
{
    srand(clock());

    for(int i=0; i<n; i++)
    {
        p[i].x=rand()%10;
        p[i].y=rand()%10;
    }
}

void show(point p[], int n)
{
    for(int i=0; i<n; i++)
        printf("(%d, %d)\t", p[i].x, p[i].y);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    int n=10;
    point p[n];

    populate(p, n);
    show(p, n);

    return 0;
}
