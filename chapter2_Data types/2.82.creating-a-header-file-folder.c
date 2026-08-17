/*
 * Program: Creating A Header File Folder
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>
#include "myfolder/mybool.h"

int main()  // Main function: program execution starts here
{
    bool m=true;
    bool n=false;

    printf("m=%d\tn=%d",  // Display output
            m,n);

    return 0;  // Indicate successful program termination
}
