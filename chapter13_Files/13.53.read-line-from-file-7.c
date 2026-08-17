/*
 * Program: Read Line From File 7
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <string.h>
int main()   // Main function: program execution starts here
{
    char str[1024], key[1024];
    int line=0;
    FILE *fp=fopen("input.txt", "r");  // Open the file with the specified mode
    printf("Enter the word or sentence to be searched:");  // Display output
    scanf("%[^\n]", key);  // Read input from the user
    while(fgets(str, sizeof(str), fp) != NULL)   // Read a line/string from the file
    {
        line++;
        if(strstr(str, key)!=NULL)
        {
            printf("The string is found at line number : %d\n", line);  // Display output
        }
    }
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
