/*
 * Program 12.12: Accessing members of a structure - Accessing members of multiple structure objects
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
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct student s1 = {101, "John"};
    struct student s2 = {102, "David"};

    printf("Student 1: %d %s\n", s1.roll, s1.name);
    printf("Student 2: %d %s\n", s2.roll, s2.name);

    s1.roll = 105;

    printf("\nAfter modification:\n");
    printf("Student 1: %d %s\n", s1.roll, s1.name);
    printf("Student 2: %d %s\n", s2.roll, s2.name);

    return 0;
}
