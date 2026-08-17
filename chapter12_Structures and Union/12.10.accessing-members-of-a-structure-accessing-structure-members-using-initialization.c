/*
 * Program 12.10: Accessing members of a structure - Accessing structure members using initialization
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct student
{
    int roll;
    char name[50];
    float marks;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct student s = {101, "John", 85.5};

    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
