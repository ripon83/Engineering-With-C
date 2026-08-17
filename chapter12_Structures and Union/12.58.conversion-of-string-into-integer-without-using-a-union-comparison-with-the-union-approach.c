/*
 * Program 12.58: Conversion of String into Integer Without Using a Union - Comparison with the Union Approach
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a union used by the program.
union demo
{
    char str[10];
    int dec;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union demo d={"abc"};
    printf("%s => %d", d.str, d.dec);
    return 0;
}
