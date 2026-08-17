/*
 * Program 12.5: Structure initialization - Designated initialization - Example 2
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
    struct demo obj={
        .name="Mr. John Doley",
        .id=1
    };

    printf("ID: %d\nName: %s", obj.id, obj.name);

    return 0;
}
