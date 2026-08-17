/*
 * Program 12.106: Self-referential structure - Using the self-referential pointer
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct demo
{
    int x;
    double y;
    struct demo *ptr;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct demo d1, d2;

    d1.x = 10;
    d1.y = 20.5;

    d2.x = 30;
    d2.y = 40.5;

    d1.ptr = &d2;
    d2.ptr = NULL;

    printf("%d\n", d1.x);
    printf("%d\n", d1.ptr->x);

    return 0;
}
