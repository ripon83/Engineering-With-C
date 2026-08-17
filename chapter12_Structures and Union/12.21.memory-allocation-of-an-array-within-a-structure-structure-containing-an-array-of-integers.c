/*
 * Program 12.21: Memory allocation of an array within a structure - Structure containing an array of integers
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include<stdio.h>
// Define a structure used by the program.
struct student
{
    int marks[10];
    char ch;
}s;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("Memory: %zu bytes", sizeof(s));
    return 0;
}
