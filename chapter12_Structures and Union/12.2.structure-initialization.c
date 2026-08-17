/*
 * Program 12.2: Structure initialization
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct demo
{
    int id;
    char name[100];
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct demo obj={1, "Mr. John Doley"};

    printf("ID: %d\nName: %s", obj.id, obj.name);

    return 0;
}
