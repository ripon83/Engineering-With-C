/*
 * Program 12.6: The typedef - Using typedef after structure declaration
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct demo_program
{
    int id;
    char name[100];
};

typedef struct demo_program demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    demo obj={.name="Mr. John Doley", .id=1};

    printf("ID: %d\nName: %s", obj.id, obj.name);

    return 0;
}
