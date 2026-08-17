/*
 * Program 12.20: Memory allocation of an array within a structure - Effect of the position of members
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include<stdio.h>
// Define a structure used by the program.
struct student
{
    char name[10];
    int reg_no;
    char sec;
}s;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("Memory: %zu bytes", sizeof(s));
    return 0;
}
