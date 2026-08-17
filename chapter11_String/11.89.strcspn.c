/*
 * Program: Strcspn
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int main()  // Main function: program execution starts here
{
    const char *str=
    "Do not run after success. We should run after excellence.";

    const char *sub="bcde";

    int length=strcspn(str,sub);

    printf("Initial segment length: %d\n",length);  // Display output

    return 0;  // Indicate successful program termination
}
