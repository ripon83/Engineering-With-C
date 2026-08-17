/*
 * Program 12.13: Accessing members of a structure - Accessing members through a structure pointer
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
    struct student *p = &s;

    printf("Roll: %d\n", p->roll);
    printf("Name: %s\n", p->name);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}
