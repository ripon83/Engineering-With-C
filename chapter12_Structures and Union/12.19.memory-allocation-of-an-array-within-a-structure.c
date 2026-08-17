/*
 * Program 12.19: Memory allocation of an array within a structure
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include<stdio.h>
// Define a structure used by the program.
struct student
{
    char name[10];
    char sec;
    int reg_no;
}s;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("Memory: %zu bytes", sizeof(s));
    return 0;
}
