/*
 * Program 12.55: Conversion of String into Integer - Example 6
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a union used by the program.
union demo
{
    char str[10];
    long dec;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union demo d={"abcdef"};
    printf("Conversion of string into decimal is \"%s\" => %ld\n", d.str, d.dec);
    return 0;
}
