/*
 * Program 12.50: Conversion of String into Integer
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
    union demo d={"a"};
    printf("Conversion of string into decimal is \"%s\" => %d\n", d.str, d.dec);
    return 0;
}
